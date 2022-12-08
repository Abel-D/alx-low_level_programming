#include <stdio.h>
/**
 * main - prints c datatypes memory size
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	float f;
	long l;
	long long ll;
	char c;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
