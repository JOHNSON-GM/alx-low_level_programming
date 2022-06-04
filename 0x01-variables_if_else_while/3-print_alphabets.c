#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char H;

	for (H = "a"; H <= "z"; H++)
	{
	putchar(H);
	}

	for (H = "A"; H <= "Z"; H++)
	{
	putchar(H);
	}
	return (0);
}
