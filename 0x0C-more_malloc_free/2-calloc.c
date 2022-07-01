#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in array
 *Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)

	return (NULL);

	for (x = 0; x < nmemb * size; x++)
	str[x] = 0;

return (str);
}
