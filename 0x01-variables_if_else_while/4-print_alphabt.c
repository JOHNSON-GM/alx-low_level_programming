#include <stdio.h>

/**
 * main - printhe alphabet in lowercase letters, except for e and q
 *
 * Return: Alwatys 0 (success)
 *
 */
int main(void)
{
		char text;

		for (text = "a"; text <= "z"; text++)
		{
		if (text != "e" && text != "q")
		putchar(text);
		}
		putchar("\n");

	return (0);
}
