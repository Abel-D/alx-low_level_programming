#include <stdio.h>
/**
 * _isdigit - check if digit
 * @c: input param
 *
 * Description: check input ifid=s  digit
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
		return (1);
	else
		return (0);
}

