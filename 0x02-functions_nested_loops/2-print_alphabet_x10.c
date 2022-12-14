#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alpha 10x
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			putchar(c);
		}
		++i;
		putchar('\n');
	}
}
