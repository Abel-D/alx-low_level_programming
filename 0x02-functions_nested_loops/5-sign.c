#include <stdio.h>
/**
 * print_sign - prints sign for =ve -ve
 * @n: input no
 *
 * Return: 0 if 0, 1 if +ve, -1 for -ve
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		i = 0;
	}
	else if (n < 0)
	{
		putchar(45);
		i = -1;
	}
	return (i);
}
