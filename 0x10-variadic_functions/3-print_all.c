#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, format);
	i = 0;
	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 'c':
			{
				printf("%c", va_arg(args, int));
				break;
			}
		case 'i':
			{
				printf("%d", va_arg(args, int));
				break;
			}
		case 'f':
			{
				printf("%f", va_arg(args, double));
				break;
			}
		case 's':
			{
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				printf("(nil)");
				i++;
				continue;
			}
		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
