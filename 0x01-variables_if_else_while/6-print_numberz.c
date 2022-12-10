#include <stdio.h>
int print_int(int i);
/**
 * main - list mos
 *
 * Return: 0 if success
 */
int main(void)
{
	int x = 123456789;
	putchar('0');
	print_int(x);
	return (0);
}

/**
 * print - print int using putchar
 */
int print_int(int n)
{
	if (n/10)
		print_int(n / 10);
	putchar(n%10 + '0');
	return (0);
}
