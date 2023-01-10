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
	while (*argv)
	{
	printf("%d\n", argc - 1);
	break;
	}
	return (0);
}
