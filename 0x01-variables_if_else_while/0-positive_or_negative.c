#include <stdlib.h>
#include <time.h>
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
		printf("is positive\n");
	if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
