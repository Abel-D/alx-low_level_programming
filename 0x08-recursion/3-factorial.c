#include "main.h"
/**
 * factorial - calculate factorial
 * @n: input no
 *
 * Return: factorial result
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
		result = -1;
	else if (n == 0)
		result = 1 * result;
	while (n > 0)
	{
	result = result * n;
	n--;
	factorial(n);
	}
	return (result);
}
