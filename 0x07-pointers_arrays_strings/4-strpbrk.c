#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strpbrk - search a string for value
 * @s: input text
 * @accept: sequence of search param char
 *
 * Return: address of occurance of char
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	return (result);
}
