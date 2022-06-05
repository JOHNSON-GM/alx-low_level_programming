#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
