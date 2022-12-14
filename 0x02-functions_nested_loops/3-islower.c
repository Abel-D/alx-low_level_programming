#include <stdio.h>
/**
 * _islower - check for lowercase char
 * @c: ascii value of char
 * Return: 1 if character is lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
