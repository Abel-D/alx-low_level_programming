#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks no if greater than o and less than 6
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s", "Last digit of ");
	printf("%d", n);
	printf("%s", " is ");
	x = n % 10;
	printf("%d", x);
	if (x > 5)
		printf("%s\n", " and is greater than 5");
	else if (x == 0)
		printf("%s\n", " is zero");
	else if (x < 5 || x < 0)
                printf("%s\n", " and is less than 6 and not 0");
	return (0);
}
