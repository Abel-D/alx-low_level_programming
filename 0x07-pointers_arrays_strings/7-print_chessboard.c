#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_chessboard - prints the chess board pieces
 * @a: array of board pieces
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
		a++;
		i++;
	}
}
