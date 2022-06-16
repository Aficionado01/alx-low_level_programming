
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: The pointer to the name printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
