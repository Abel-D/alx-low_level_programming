#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * char *_strcpy - copy string from src to destn
 * @dest: destination address
 * @src: src address
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp;
	int length;

	tmp = dest;
	while (*src++ != '\0')
		length++;
	tmp = malloc(length + 1);

	strcpy(tmp, src);

	return (tmp);
}
