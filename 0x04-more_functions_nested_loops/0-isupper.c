#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if character is an uppercase.
 * Description: checks if letter is uppercase.
 * @c: input to be used
 * Returns: 1 if uppercase and 0 in other case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

