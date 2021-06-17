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
	char quote[60];
	size_t nBytes;

	strcpy(quote, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	nBytes = strlen(quote);
	write(stdErrFileNo, quote, nBytes);
	return (1);
}
