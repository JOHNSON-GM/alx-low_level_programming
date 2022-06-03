#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("\n\n%d is positive");
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
