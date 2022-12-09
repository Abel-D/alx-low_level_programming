#include <stdio.h>
/**
 * main - writes alphabets in lowercase
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for( c='a'; c<='z'; ++c)
	{
		printf("%c", c);
	}
	return (0);
}
