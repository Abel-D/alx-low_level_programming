#include <stdio.h>
/**
 * jack_bauer - print every minute of a day
  */
void jack_bauer(void)
{
	int h, m, s, i, lp;

	for (h = 0; h <= 2; h++)
	{
		if (h == 2)
			lp = 3;
		else
			lp = 9;
		for (m = 0; m <= lp; m++)
		{
			for (s = 0; s < 6; s++)
			{
				for ( i = 0; i <=9; i++)
				{
					if (h / 10)
						continue;
					putchar(h % 10 + '0');
					if (m / 10)
						continue;
					putchar(m % 10 + '0');
					putchar(':');
					if (s / 10)
						continue;
					putchar(s % 10 + '0');
					if (i / 10)
                                                continue;
                                        putchar(i % 10 + '0');
					putchar('\n');
				}
			}
		}
	}
}
