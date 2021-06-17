#include <string.h>
#include <unistd.h>

/**
 * main - Prints a string with printf
 *
 * Return: 0 if program executed successfully
 */
int main(void)
{
	int stdErrFileNo = (2);
	char buf[60];
	size_t nBytes;

	strcpy(buf, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	nBytes = strlen(buf);
	write(stdErrFileNo, buf, nBytes);
	return (1);
}
