#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string to new loc
 * @str: input
 *
 * Return: char ptr
 */
char *_strdup(char *str)
{
	char *p = strdup(str);

	return (p);
}
