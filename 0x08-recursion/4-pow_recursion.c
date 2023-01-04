#include <math.h>
/**
 * _pow_recursion - print exponential power
 * @x: base no
 * @y: exponent
 *
 * Return: exponent result of x and y
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	while (y >= 1)
	{
		result = result * x;
		y--;
	}
	return (result);
}
