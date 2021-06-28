int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

/**
 * b10_pow - Computes the power of 10 to the given index
 * @idx: The index to which 10 is raised to.
 *
 * Return: A power of 10
 */
static int b10_pow(int idx)
{
	int i;
	int result = 1;

	for (i = 0; i < idx; i++)
		result *= 10;
	return (idx < 0 ? 0 : result);
}
