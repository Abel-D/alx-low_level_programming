#include <stdio.h>

/**
 * print_name - print name
 * @name: name to print
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", *f(name));
}
