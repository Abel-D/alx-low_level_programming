#include <stdio.h>
#include <time.h>
#include<stdlib.h>
/**
 * main - generate random code
 *
 * Return: generated code- int
 */
int main(void)
{
	int seed = time(0);

	srand(seed);

	putchar(rand() + '\0');
}
