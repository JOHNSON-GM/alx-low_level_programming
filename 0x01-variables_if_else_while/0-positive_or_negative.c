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
	srand(0);

	if (n > 0)
	{
		printf("%lu is positive");
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
