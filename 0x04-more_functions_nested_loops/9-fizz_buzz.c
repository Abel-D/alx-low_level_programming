#include <stdio.h>

/**
 * main - print nos
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s", "Fizz");
		if (i % 5 == 0)
			printf("%s", "Buzz");
		else if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
