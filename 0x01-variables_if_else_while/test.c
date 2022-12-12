#include <stdio.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j, k, x;

	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = 0; i < 10; i++)
        		{
                		for (k = 0; j <= 9; j++)
                		{
					putchar(' ');
                		        if (i / 10)
                               			 continue;
		                        putchar(i % 10 + '0');
                		        if (j / 10)
                                		continue;
		                        putchar(j % 10 + '0');

                		        putchar(' ');
					if (x / 10)
						continue;
					putchar(i % 10 + '0');
					if (k / 10)
						continue;
					putchar(j % 10 + '0');
					if (i == 9)
					{
						if (j == 9)
						{
							if(k == 9)
							{
								break;
							}
						}
					}
				}
			}
		i++;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
