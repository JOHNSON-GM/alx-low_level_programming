#include "main.h"
#include <stdio.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return(NULL);

	x = 0;
	while (x < size)
	{
		str[i] = c;
			x++;
	}
		return(str);
}
