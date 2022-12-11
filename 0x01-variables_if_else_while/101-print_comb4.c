#include <stdio.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j > i && j < k)
				{
					if (i / 10)
						continue;
					putchar(i % 10 + '0');
					if (j / 10)
						continue;
					putchar(j % 10 + '0');
					if (k / 10)
						continue;
					putchar(k % 10 + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						putchar('\n');
						break;
					}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
