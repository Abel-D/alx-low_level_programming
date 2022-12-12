#include <stdio.h>
/**
 * main - print 4 integer combo
 *
 * Return: 0 if success
 */
int main(void)
{
	int x = 1;
	int i = 0;
	int k = i;
	int j = 0;
	while (i <= 9)
	{
	while (j <= 8)
	{
		while (k <= 9)
		{
			while (x <= 9)
			{
				if (i / 10)
					continue;
				putchar((i % 10) + '0');
				if (j / 10)
					continue;
				putchar((j % 10) + '0');
				putchar(' ');

				if (k / 10)
					continue;
/*				putchar(k);
				if (x / 10)
					continue;
				putchar(x);
*/				if (i == 9 && j == 8)
				{
					if (k == 9)
					{
						if (x == 9)
							break;
					}
				}
				putchar(',');
				x++;
			}
			k++;
		}
		j++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
