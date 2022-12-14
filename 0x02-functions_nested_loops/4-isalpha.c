#include <stdio.h>
/**
 * _isalpha - check if char is a letter
 * @c: ascii of character
 * Return: 1 if char is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}
