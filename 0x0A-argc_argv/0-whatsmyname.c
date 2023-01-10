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
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", *argv);
	i++;
	}
	return (0);
}
