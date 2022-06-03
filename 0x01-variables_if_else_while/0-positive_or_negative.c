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
		printf("\n\n%dis positive", n);
	}
	else if (n < 0)
	{
		printf("%dis negative", n);
	}
	else if (n == 0)
	{
		printf("%dis zero", n);
	}

	return (0);
}
