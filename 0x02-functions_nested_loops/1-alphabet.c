#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet 
 * 
 * Return: 0 if success
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
