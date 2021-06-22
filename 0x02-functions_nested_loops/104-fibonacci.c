#include <stdio.h>
#include <stdint.h>

void print_128(__int128 num);
__int128 b10_pow_128(int idx);

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 98;
	__int128 num1 = 0;
	__int128 num2 = 1;
	int i;

	for (i = 0; i < limit; i++)
	{
		__int128 temp = num1;
		__int128 current_num = num1 + num2;

		if (i < limit)
		{
			print_128(current_num);
			printf("%s", i == limit - 1 ? "\n" : ", ");
		}

		num1 = num2;
		num2 += temp;
	}

	return (0);
}

void print_128(__int128 num)
{
	__int128 rem = num;
	int i;

	for (i = 37; i >= 0; i--)
	{
		__int128 power = b10_pow_128(i);

		if (rem > power - 1){
			putchar((int)((rem / power) % 10) + '0');
		}
	}
}

__int128 b10_pow_128(int idx)
{
	int i;
	__int128 result = 1;

	if (idx < 0)
		return 0;

	for (i = 0; i < idx; i++)
	{
		result *= 10;
	}
	return result;
}
