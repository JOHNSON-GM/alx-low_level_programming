#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	srand(0);

	if (n > 0)
	{
		printf("\n\n%lu is positive");
	}
	else if (n < 0)
	{
		printf("%lu is negative");
	}
	else if (n == 0)
	{
		printf("%lu is zero");
	}

	return (0);
}
