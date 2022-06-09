#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - function to be used
 * @i: input character.
 * Return: Always 0 (success)
 *
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = 1;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

}
/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);

}
