#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if parameter is an uppercase character.
 * Description: checks if parameter is uppercase.
 * @c: inout to be used
 * return: ALways 0 (success)
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

