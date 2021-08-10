#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define PRINT_MAGIC(header) {\
for (i = 0; i < EI_NIDENT; i++) \
	printf("%02x%c", *((unsigned char *)(header) + i), \
		i < EI_NIDENT - 1 ? ' ' : '\n'); }

#define PRINT_DATA(header) {\
printf(*((unsigned char *)header + 0x05) == ELFDATA2LSB \
	? "2's complement, little endian\n" \
		: ((*((unsigned char *)header + 0x05) == ELFDATA2MSB) \
			? "2's complement, big endian\n" \
			: (*((unsigned char *)header + 0x05) == ELFDATANONE \
				? "none\n" : "<unknown: %x>\n"\
				)), *((unsigned char *)header + 0x05)); }

#define PRINT_VERSION(header) \
printf("%d%s", *((unsigned char *)header + 6), \
	*((unsigned char *)header + 6) == EV_CURRENT \
		? " (current)\n" \
		: (((*((unsigned char *)header + 6) < EV_CURRENT) && \
				(*((unsigned char *)header + 6) != EV_NONE)) \
			? "\n" \
			: " <unknown>\n") \
	)

#define CLOSE_FD(fd) {\
if (close((fd)) == -1) \
{ \
	write(STDERR_FILENO, "Error: Can't close file\n", 24); \
	exit(98); \
}}

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd);
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file);
char is_elf_file(int fd, void **header);
void print_elf_header(void *header);
void print_section(int id, void *header);
void print_class(void *header);
void print_os_abi(void *header);
void print_abi_version(void *header);
void print_type(void *header);
void print_entry_pt_addr(void *header);
#endif
