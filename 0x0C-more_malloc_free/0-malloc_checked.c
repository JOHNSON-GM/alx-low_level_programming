#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */


void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
       if (str == NULL)

		exit(98);

	return (str);
}	

