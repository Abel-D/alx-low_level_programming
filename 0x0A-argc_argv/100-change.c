#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates min change amount
 * @argc: no of paramss
 * @argv: array of params
 *
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		res = 1;
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n",  atoi(argv[1]) / 5);
		res = 0;
	}
	return (res);
}
