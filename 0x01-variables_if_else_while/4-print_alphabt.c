#include <stdio.h>

/**
 * main - printhe alphabet in lowercase letters, except for e and q
 *
 * Return: Alwatys 0 (success)
 *
 */
int main(void)
{
		char ch = "a";

		for (ch = "a"; ch <= "z"; ch++)
		{
		if (ch != "e" && ch != "q")
		putchar(ch);
		}
		putchar("\n");

	return (0);
}
