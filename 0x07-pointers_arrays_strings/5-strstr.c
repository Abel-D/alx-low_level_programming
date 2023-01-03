#include <stdio.h>
#include <string.h>
/**
 * _strstr - locate substring in str
 * @haystack: main txt
 * @needle: search substr
 *
 * Return:ptr to location
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
