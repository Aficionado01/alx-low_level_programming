#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * err_98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @f_from: file descriptor of file_from, or -1
 * @f_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void err_98(ssize_t check, char *file, int f_from, int f_to)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
if (f_from != -1)
close(f_from);
if (f_to != -1)
close(f_to);
exit(98);
}
}

/**
 * err_99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @f_from: file descriptor of file_from, or -1
 * @f_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void err_99(ssize_t check, char *file, int f_from, int f_to)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
if (f_from != -1)
close(f_from);
if (f_to != -1)
close(f_to);
exit(99);
}
}

/**
 * err_100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @f: file descriptor
 *
 * Return: void
 */
void err_100(int check, int f)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
exit(100);
}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int f_from, f_to, close_to, close_from;
ssize_t length_r, length_w;
char f_buffer[1024];
mode_t mode;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f_from = open(argv[1], O_RDONLY);
err_98((ssize_t)f_from, argv[1], -1, -1);
mode =  S_IWUSR | S_IRUSR | S_IWGRP |  S_IRGRP |  S_IROTH;
f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
err_99((ssize_t)f_to, argv[2], f_from, -1);
length_r = 1024;

while (length_r == 1024)
{
length_r = read(f_from, f_buffer, 1024);
err_98(length_r, argv[1], f_from, f_to);
length_w = write(f_to, f_buffer, length_r);
if (length_w != length_r)
length_w = -1;
err_99(length_w, argv[2], f_from, f_to);
}

close_to = close(f_to);
close_from = close(f_from);
err_100(close_to, f_to);
err_100(close_from, f_from);
return (0);
}
