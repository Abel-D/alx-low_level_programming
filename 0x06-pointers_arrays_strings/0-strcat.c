#include <string.h>
/**
 * _strcat - concatinates string
 * @dest: destination str ptr
 * @src: str to be copied
 *
 * Return: concatinated str
 */
char *_strcat(char *dest, char *src)
{
	char *res;

	res = strcat(dest, src);
	return (res);
}
