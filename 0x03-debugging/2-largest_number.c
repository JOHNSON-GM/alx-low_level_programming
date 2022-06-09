#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	if (a > b && a > c)
	{
		largest_number = a;
	}
	else if (b > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}

	return (largest_number);
}
