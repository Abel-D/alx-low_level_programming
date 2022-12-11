#include <stdio.h>
#include <stdbool.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j, k;
	bool kMax, jMax, iMax;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k && i != j && j != k)
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

					if (i == 7)
						iMax = true;
					if (j == 8)
						jMax = true;
					if (k == 9)
						kMax = true;
					if (iMax == true && jMax == true && kMax == true)
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
