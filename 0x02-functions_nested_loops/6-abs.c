#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - compute absolute value of no
 * @x: input val
 *
 * Return: absolute val
 */
int _abs(int x)
{
	int res;

	if (x > 0)
		res = x;
	if (x < 0)
		res = x * -1;
	else if (x == 0)
		res = 0;
	return (res);
}
