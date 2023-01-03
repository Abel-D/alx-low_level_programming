#include <stdlib.h>
/**
 * _memset - populate memory with const value
 * @s: memory location
 * @b: constant value
 * @n: no of bytes
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (abs(i) < n)
	{
		*s++ = b;
		i++;
	}
	putchar('\n');
	return (s);
}

