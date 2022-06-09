#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if letter is uppercase or lowercase
 * Description: returns 1 when uppercase and 0 when lowercase
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

