#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign random value to c
 *
 * Return: is positive or is negative or is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%*d", n);
		printf("%*s", "is positive\n");
	else if (n < 0)
		printf("%*d", n);
		printf("%*s", "is negative\n");
	else
		printf("%*d", n);
		printf("%*s", "is zero\n");
	return (0);
}
