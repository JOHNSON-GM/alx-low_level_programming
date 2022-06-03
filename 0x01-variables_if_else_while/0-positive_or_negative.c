#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("\n\n%ld is positive");
	}
	else if (n < 0)
	{
		printf("%ld is negative");
	}
	else if (n == 0)
	{
		printf("%ld is zero");
	}

	return (0);
}
