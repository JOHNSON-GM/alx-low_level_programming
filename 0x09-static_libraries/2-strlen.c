#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: character to be used
 *
 * Return: Length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}

