#include <stdio.h>

/**
 * main - printhe alphabet in lowercase letters, except for e and q
 *
 * Return: Alwatys 0 (success)
 *
 */
int main(void)
{
		char letter;

		for (letter = "a"; letter <= "z"; letter++)
		{
		if (letter != "e" && letter != "q")
		putchar(letter);
		}
		putchar("\n");

	return (0);
}
