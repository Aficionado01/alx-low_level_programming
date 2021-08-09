#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define PRINT_MAGIC(header) {\
	for (i = 0; i < EI_NIDENT; i++) \
		printf("%02x%c", *((unsigned char *)(header) + i), \
			i < EI_NIDENT - 1 ? ' ' : '\n'); }

#define PRINT_DATA(header) {\
	printf("2's complement, %s\n", \
		(*((unsigned char *)header + 0x05) == 1) ? "little endian" : "big endian"); }

#define PRINT_VERSION(header) {\
if (*((unsigned char *)header + 6) == 0) \
	printf("%x %s\n", *((unsigned char *)header + 6), "(invalid)"); \
else if (*((unsigned char *)header + 6) == 1) \
	printf("%x %s\n", *((unsigned char *)header + 6), "(current)"); }

#define PRINT_N_SPACES(n) { \
for (j = 0; j < (n); j++) \
	printf("%c", ' '); }

#define CLOSE_FD(fd) {\
if (close((fd)) == -1) \
{ \
	write(STDERR_FILENO, "Error: Can't close file\n", 24); \
	exit(98); \
}}

char is_elf_file(int fd, void **header);
void print_elf_header(void *header);
void print_section(int id, void *header);
void print_class(void *header);
void print_os_abi(void *header);
void print_abi_version(void *header);
void print_type(void *header);
void print_entry_pt_addr(void *header);

/**
 * main - Displays the information contained in the ELF header at the
 * start of an ELF file
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, otherwise a number between 97 and
 * 100 (each number represents an error)
 */
int main(int argc, char *argv[])
{
	int fd;
	void *header = NULL;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 32);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 29);
		exit(98);
	}
	if (is_elf_file(fd, &header))
	{
		if (header != NULL)
		{
			print_elf_header(header);
			free(header);
		}
	}
	else
	{
		CLOSE_FD(fd);
		write(STDERR_FILENO, "Invalid ELF file %s.\n", 22);
		exit(98);
	}
	CLOSE_FD(fd);
	return (0);
}

/**
 * is_elf_file - Checks if a file contains an ELF header
 * @fd: The file handle
 * @header: The pointer to the addres of the ELF header
 *
 * Return: 1 if file contains an ELF header, otherwise 0
 */
char is_elf_file(int fd, void **header)
{
	int c;
	unsigned char buf[5];

	c = read(fd, (void *)buf, 5);
	if (c == 5)
	{
		if (*(buf + 0) == 0x7f
			&& (*(buf + 1) == 'E')
			&& (*(buf + 2) == 'L')
			&& (*(buf + 3) == 'F')
			&& ((*(buf + 4) == 1) || (*(buf + 4) == 2)))
		{
			*header = malloc(*(buf + 4) == 1 ? 52 : 64);
			lseek(fd, 0, SEEK_SET);
			c = read(fd, *header, (*(buf + 4) == 1 ? 52 : 64));
			if (c == 52 || c == 64)
			{
				return (1);
			}
			else
			{
				CLOSE_FD(fd);
				write(STDERR_FILENO, "Incomplete ELF file.\n", 22);
				exit(98);
			}
		}
	}
	return (0);
}

/**
 * print_elf_header - Prints the contents of an elf header
 * @header: The elf header
 */
void print_elf_header(void *header)
{
	int i = 0, title_width = 35, len, j;
	char *sections[] = {
		"Magic",
		"Class",
		"Data",
		"Version",
		"OS/ABI",
		"ABI Version",
		"Type",
		"Entry point address",
		NULL,
	};

	printf("ELF Header:\n");
	while (*(sections + i) != NULL)
	{
		printf("  %s:", *(sections + i));
		if (i == 0)
		{
			PRINT_N_SPACES(3);
		}
		else
		{
			for (len = 0; *(sections[i] + len) != '\0'; len++)
				;
			PRINT_N_SPACES(title_width - len - 1);
		}
		print_section(i, header);
		i++;
	}
}

/**
 * print_section - Prints the content of a section in the ELF header
 * @id: The id of the section
 * @header: The pointer to the ELF header
 */
void print_section(int id, void *header)
{
	int i;

	switch (id)
	{
	case 0:
		PRINT_MAGIC(header);
		break;
	case 1:
		print_class(header);
		break;
	case 2:
		PRINT_DATA(header);
		break;
	case 3:
		PRINT_VERSION(header);
		break;
	case 4:
		print_os_abi(header);
		break;
	case 5:
		print_abi_version(header);
		break;
	case 6:
		print_type(header);
		break;
	case 7:
		print_entry_pt_addr(header);
		break;
	default:
		break;
	}
}

/**
 * print_class - Prints the class section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_class(void *header)
{
	printf("ELF%d\n", *((unsigned char *)header + 4) == 1 ? 32 : 64);
}

/**
 * print_os_abi - Prints the OS/ABI section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_os_abi(void *header)
{
	switch (*((unsigned char *)header + 0x07))
	{
	case 0x00:
		printf("Unix - System V\n");
		break;
	case 0x01:
		printf("HP-UX\n");
		break;
	case 0x02:
		printf("NetBSD\n");
		break;
	case 0x03:
		printf("Linux\n");
		break;
	case 0x09:
		printf("FreeBSD\n");
		break;
	case 0x0A:
		printf("Tru64\n");
		break;
	case 0x0C:
		printf("OpenBSD\n");
		break;
	default:
		break;
	}
}

/**
 * print_abi_version - Prints the ABI version in the ELF header
 * @header: The pointer to the ELF header
 */
void print_abi_version(void *header)
{
	printf("%d\n", *((unsigned char *)header + 8));
}

/**
 * print_type - Prints the type section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_type(void *header)
{
	int is_le = *((unsigned char *)header + 0x05) == 1;
	unsigned short type;

	type = *((unsigned char *)header + 0x10 +
		(is_le && (5 << 8 == 0 ? 0 : 1) ? 0 : 1));
	type |= (*((unsigned char *)header + 0x10 +
		(is_le && (5 << 8 == 0 ? 0 : 1) ? 1 : 2)) << 8);
	switch (type)
	{
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
		break;
	}
}

/**
 * print_entry_pt_addr - Prints the Entry point address
 * section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_entry_pt_addr(void *header)
{
	int i, j, can_print = 0, offset = 0x18;
	int val_len = *((unsigned char *)header + 4) == 1 ? 4 : 8;
	int is_le = *((unsigned char *)header + 0x05) == 1;

	printf("0x");
	for (i = 0; i < val_len; i++)
	{
		j = is_le ? val_len - i - 1 : i;
		can_print = *((unsigned char *)header + offset + j) > 0 && !can_print
			? 1 : can_print;
		if (can_print)
			printf("%02x", *((unsigned char *)header + offset + j));
	}
	printf("\n");
}
