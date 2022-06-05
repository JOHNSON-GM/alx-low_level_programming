#include <stdio.h>

/**
 * main - printing combinations of single digit numbers
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
		if (X != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
