#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void close_fd(int fd);

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, otherwise a number between 97 and
 * 100 (each number represents an error)
 */
int main(int argc, char *argv[])
{
	int perm = 0664, from_fd, to_fd, i, c, buf_size = 1024;
	void *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_fd = open(argv[2], O_RDWR | O_TRUNC);
	if (to_fd < 0)
	{
		to_fd = open(argv[2], O_RDWR | O_CREAT, perm);
		if (to_fd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * buf_size);
	for (i = 0; ; i += buf_size)
	{
		c = read(from_fd, buf, buf_size);
		if (c == 0)
			break;
		if (write(to_fd, buf, c) != c)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	free(buf), close_fd(from_fd), close_fd(to_fd);
	return (0);
}

/**
 * close_fd - closes a file handle and exits program on failure
 * @fd: The file handle
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
