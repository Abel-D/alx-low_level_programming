#include <stdio.h>
/**
 * times_table(void) - prints multiplication table 9 times
 */
void times_table(void)
{
	int i , j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			while (j <= 9)
			{
				res = i * j;
				if (res / 10)
					continue;
				putchar(res % 10 + '0');
				j++;
			}
			putchar('\n');
		}
	}
}
