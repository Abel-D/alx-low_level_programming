#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - sum args
 * @argc: no of args
 * @argv: prog name
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i = 1;

	while (i <= argc)
	{
	if (isdigit(argv[i][0]))
	{
		res = res + atoi(argv[i]);
	}
	else
	{
		printf("%s\n", "Error");
		break;
	}
		i++;
	}

	printf("%d\n", res);
	return (0);
}
