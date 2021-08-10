#ifndef MAIN_H
#define MAIN_H
#include <elf.h>
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
	printf("2's complement, %s\n", \
		(*((unsigned char *)header + 0x05) == 1) ? "little endian" : "big endian"); }

#define PRINT_VERSION(header) {\
if ((*((unsigned char *)header + 6) == EV_NONE) || \
	(*((unsigned char *)header + 6) > EV_CURRENT)) \
	printf("%d %s\n", *((unsigned char *)header + 6), "<unknown>"); \
else if (*((unsigned char *)header + 6) == EV_CURRENT) \
	printf("%u %s\n", *((unsigned char *)header + 6), "(current)"); \
else if (*((unsigned char *)header + 6) < EV_CURRENT) \
	printf("%u\n", *((unsigned char *)header + 6)); }

#define PRINT_N_SPACES(n) { \
for (j = 0; j < (n); j++) \
	printf("%c", ' '); }

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
/* void ensure_endianness(char little_e, void *data, unsigned int len);
void print_elf32_header(Elf32_Ehdr *h);
void print_elf32_header_2(Elf32_Ehdr *h);
void print_elf64_header(Elf64_Ehdr *h);
void print_elf64_header_2(Elf64_Ehdr *h);
void put_err(char *str); */
#endif
