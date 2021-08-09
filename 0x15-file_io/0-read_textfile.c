#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
char *f_buffer;
ssize_t length_r, length_w;

if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
f_buffer = malloc(sizeof(char) * letters);
if (f_buffer == NULL)
{
close(f);
return (0);
}
length_r = read(f, f_buffer, letters);
close(f);
if (length_r == -1)
{
free(f_buffer);
return (0);
}
length_w = write(STDOUT_FILENO, f_buffer, length_r);
free(f_buffer);
if (length_r != length_w)
return (0);
return (length_w);
}
