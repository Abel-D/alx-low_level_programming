#include <string.h>
/**
 * _strncat - concatinates string
 * @dest: destination str ptr
 * @src: str to be copied
 * @n: no of bytes to concat
 * Return: concatinated str
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res;

	res = strncat(dest, src, n);
	return (res);
}
