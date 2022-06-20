#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sums of diagonals in matrix
* @a: matrix
* @size: size of matrix
*/

void print_diagsums(int *a, int size)
{

int diagonal_sum_1 = 0;
int diagonal_sum_2 = 0;
int row, x;

for (row = 0; row < size; row++)
{
x = (row * size) + row;
diagonal_sum_1 += a[x];
}

for (row = 1; row <= size; row++)
{
x = (row * size) - row;
diagonal_sum_2 += a[x];
}

printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);

}
