#include "main.h"

/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;
	y = 0;
	while (y <= n)
	{
		x = a[counter];
		a[y++] = a[n];
		a[n--] = x;
	}
}
