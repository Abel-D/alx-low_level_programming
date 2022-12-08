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
	printf("Size of char: %zu bytes\n", sizeof(c));
	printf("Size of int: %zu bytes\n", sizeof(i));
	printf("Size of long: %zu bytes\n", sizeof(l));
	printf("Size of long long: %zu bytes\n", sizeof(ll));
	printf("Size of int: %zu bytes\n", sizeof(f));
}
