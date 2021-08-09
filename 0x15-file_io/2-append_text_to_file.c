#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f;
ssize_t length_w;
size_t i;

if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
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
