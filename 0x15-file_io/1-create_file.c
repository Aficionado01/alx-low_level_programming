#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t length_w = 0;
size_t i;

if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
;
length_w = write(f, text_content, i);
}
close(f);
if (length_w == -1)
return (-1);
return (1);
}
