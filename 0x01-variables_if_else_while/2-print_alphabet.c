#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char x;

	for (x = "a"; x <= "z"; x++;)
	putchar(x);
	putchar("\n");

	return (0);
}
