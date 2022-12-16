#include <stdio.h>
/**
 * _isupper - check for uppercase
 * @c: input val
 *
 * Description: return o or 1 dep
 * Return: integer 1 if success, else 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}

