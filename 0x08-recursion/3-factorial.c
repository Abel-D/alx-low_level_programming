#include "main.h"
/**
 * factorial - calculate factorial
 * @n: input no
 *
 * Return: factorial result
 */
int factorial(int n)
{
	int i, result = 1;

	if (n < 0)
		result = -1;
	else if (n == 0)
		result = 1;
	else
	{
		for (i = n; i > 0; i--)
		{
			result = result * i;
		}
	}
	return (result);
}
