#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry function
 *
 * Return: int 0 if success
 */
int main(int argc, char* argv[])
{

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (98);
	}

	printf("%d", (*get_op_func)(argv[1])(atoi(argv[2]), atoi(argv[3])));
	return 0;
}
