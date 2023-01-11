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
0{0004
	int res = 0;
	int i = 1;
	int x;

	while (i <= argc)
	{
		x = scanf("%c",argv[i]);

		if (x != 1)
		{
			res = res + atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");

			break;
		}
			res = res + atoi(argv[i]);
			i++;
	}

	printf("%d\n", res);
	return (0);
}
