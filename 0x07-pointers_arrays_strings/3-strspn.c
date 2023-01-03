#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strspn - return length of substring
 * @s: input text
 * @accept: subscript of text
 *
 * Return: length of substring in memory
 */
unsigned int _strspn(char *s, char *accept)
{
	int length;

	length = strspn(s, accept);

	return (abs(length));
}
