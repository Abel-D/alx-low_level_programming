#include <string.h>
/**
 * _strncpy - copy n string to dest
 * @src: source str
 * @dest: destination str
 * @n: no of bytes
 *
 * Return: ptr to copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *res;

	res = strncpy(dest, src, n);
	return (res);
}
