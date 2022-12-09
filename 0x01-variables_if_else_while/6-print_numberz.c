#include <stdio.h>

void print(int i);
/**
 * main - list mos
 *
 * Return: 0 if success
 */
int main(void)
{
	int x = 123456789;
	putchar('0');
	print(x);
	return (0);
}

/**
 * print - print int using putchar
 */
void print(int n)
{
print(n / 10);
putchar(n%10 + '0');
}
