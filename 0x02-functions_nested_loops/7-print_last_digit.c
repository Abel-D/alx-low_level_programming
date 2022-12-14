#include <stdio.h>
/**
 * print_last_digit - print last digit of integer
 * @x: input integer
 * Return: last digit val
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	putchar(last_digit);
	return (last_digit);
}
