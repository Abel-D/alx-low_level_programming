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
	if (abs(x) > 5)
		printf("%s", " and is greater than 5\n");
	else if (abs(x) > 0 && abs(x) < 6)
		printf("%s", " and is less than 6 and not 0\n");
	else if (x == 0)
		printf("%s", " is zero\n");
	return (0);
}
