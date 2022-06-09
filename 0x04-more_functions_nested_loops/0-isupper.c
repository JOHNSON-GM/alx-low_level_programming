#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if letter is an uppercase letter.
 * @c: inout to be used
 * return: ALways 0 (success)
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

