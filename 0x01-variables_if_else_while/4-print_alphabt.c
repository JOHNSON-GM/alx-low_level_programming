#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - printhe alphabet in lowercase letters, except for e and q
 *
 * Return: Alwatys 0 (success)
 *
 */
int main(void)
{
		int i;

	for (i = 97; i <= 123; i++)
	{
			if (i != 101 && i != 113)
		{
				putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
