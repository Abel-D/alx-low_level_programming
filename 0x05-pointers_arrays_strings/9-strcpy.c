#include <stdio.h>
#include <string.h>
/**
 * char *_strcpy - copy string from src to destn
 * @dest: destination address
 * @src: src address
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i = 0;
	char* p;

	strcpy(*src , *dest);
	return *dest;
}
