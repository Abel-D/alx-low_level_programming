#include <stdio.h>
/**
 * print_numbers - print nos 0-9
 * Description: print nos 0-9
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i / 10)
			continue;
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
