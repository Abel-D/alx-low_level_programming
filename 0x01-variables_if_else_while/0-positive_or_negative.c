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
#define typename(x) _Generic((x), \
	int :	"int", \
	float :	"float" \
	)
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);

	if (n > 0)
	{
		printf("%s", " is positive\n");
	}
	else if (n < 0)
	{
		printf("%s", " is negative\n");
	} else
		printf("%s", " is zero\n");
	return (0);
}
