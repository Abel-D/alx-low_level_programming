#include <stdlib.h>
#include "3-op_functions.c"
#include "3-calc.h"
/**
 * get_op_func - selects the operator function
 * @s: input char
 *
 * Return: integer result
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (i < 6)
	{
		if (s == ops[i].op || ops[i].op == NULL)
			break;
		i++;
	}
	return (&*ops[i].f);
}
