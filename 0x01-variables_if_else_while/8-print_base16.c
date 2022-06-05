#include <stdio.h>
/**
 * main - Prints numbers 0 to 9 and letters a to f
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int X;

	for (X = 48; X < 58; X++)
	{
		putchar(X);
	}
	for (X = 97; X < 103; X++)
	{
		putchar(X);
	}
	putchar('\n');

	return (0);
}
