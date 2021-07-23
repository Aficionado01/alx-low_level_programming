/**
* reverse_array - reverses the contents of an array
* @a: integer array to be reversed
* @n: length of array a
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i = 1;

for (i = 0; i < n / 2; i++)
{
a[i] += a[n - i - 1];
a[n - i - 1] = a[i] - a[n - i - 1];
a[i] -= a[n - i - 1];
}
}
