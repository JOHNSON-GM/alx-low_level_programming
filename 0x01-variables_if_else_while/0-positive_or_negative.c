#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));\n\n

	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n < 0)
	{
		printf("%d is negative");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}

	return (0);
}
