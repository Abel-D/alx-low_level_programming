#include <stdlib.h>
#include <string.h>
/**
 * _strchr - find a char in a sequence
 * @s: input text
 * @c: input char to search
 *
 * Return: address of the first occurance
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);
	return (result);
}
