#include <stdio.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j && i != j)
			{
				if (i / 10)
					continue;
			putchar(i % 10 + '0');
				if (j / 10)
					continue;
			putchar(j % 10 + '0');
			if (i == 8)
			{
				if (j == 9)
				{
					break;
				}
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
