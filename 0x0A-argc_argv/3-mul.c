#include <stdlib.h>
#include <stdio.h>
/**
 * main - print program name
 * @argc: no of params
 * @argv: prog name
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("%s\n", "Error");
	}

	return (0);
}
