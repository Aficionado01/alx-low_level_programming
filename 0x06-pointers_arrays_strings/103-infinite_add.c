/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer for storing the result
 * @size_r: The size of the buffer
 *
 * Return: If result can be stored in r, then r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len, n2_len, max_len, idx;
	char n1_dig, n2_dig, carry, rem;

	n1_len = n2_len = carry = rem = 0;
	n1_dig = *n1;
	n2_dig = *n2;
	while (*(n1 + n1_len) != '\0')
		n1_len++;
	while (*(n2 + n2_len) != '\0')
		n2_len++;

	max_len = n1_len > n2_len ? n1_len : n2_len;
	idx = max_len;
	if (size_r < idx + 1)
		return (0);

	*(r + idx) = '\0';
	idx--;
	n1_len--;
	n2_len--;
	while (idx >= 0)
	{
		n1_dig = n1_len >= 0 ? *(n1 + n1_len) - '0' : 0;
		n2_dig = n2_len >= 0 ? *(n2 + n2_len) - '0' : 0;
		rem = (n1_dig + n2_dig + carry) % 10;
		carry = (n1_dig + n2_dig + carry) / 10;
		*(r + idx) = (char)(rem + '0');
		n1_len--;
		n2_len--;
		idx--;
	}

	if (carry > 0 && size_r >= max_len + 2)
	{
		for (idx = max_len + 1; idx > 0; idx--)
		{
			char right = *(r + idx);

			*(r + idx) = *(r + idx - 1);
			*(r + idx - 1) = right;
		}
		*(r + idx) = carry + '0';
		return (r);
	}
	if (carry > 0 && size_r < max_len + 2)
		return (0);
	return (r);
}
