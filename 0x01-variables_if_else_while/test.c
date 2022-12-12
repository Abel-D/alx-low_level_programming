#include <stdio.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j, k, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (x = 1; x <= 9; x++)
				{
				if (x > j)
				{
				putchar(' ');
				if (i / 10)
					continue;
				putchar(i % 10 + '0');
				if (j / 10)
					continue;
				putchar(j % 10 + '0');
				putchar(' ');
				if (k / 10)
					continue;
				putchar(k % 10 + '0');

				if (x / 10)
					continue;
				putchar(x % 10 + '0');
				if (i == 9 && j == 8 && k == 9 && x == 9)
				{
					putchar('\n');
					break;
				}
				else
					putchar(',');
				}
				}
			}
		}
	}
	return (0);
}
