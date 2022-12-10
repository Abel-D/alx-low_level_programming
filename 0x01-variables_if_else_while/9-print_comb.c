#include <stdio.h>
int print_int(int x);
/**
 * main -
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 123456789;
	putchar('0');
	print_int(i);
	return (0);
}

int print_int(int x)
{
	if(x / 10)
		print_int(x / 10);
	putchar(' ');
	putchar(',');
	putchar(x % 10 + '0');
	return (0);
}

