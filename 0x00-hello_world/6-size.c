#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	float afloat;
	long long alonglong;

	printf("Size of char: %1u byte(s)\n", sizeof(acharacter));
	printf("Size of int: %1u byte(s)\n", sizeof(ainteger));
	printf("Size of long int: %1u byte(s)\n", sizeof(along));
	printf("Size of long long int: %1u byte(s)\n", sizeof(alonglong));
	printf("Size of float: %1u byte(s)\n", sizeof(afloat));

	return (0);
}