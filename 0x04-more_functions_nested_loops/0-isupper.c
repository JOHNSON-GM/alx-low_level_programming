#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if letter is uppercase or lowercase
 * Description: returns 1 when uppercase and 0 when lowercase
 * Return: ALways 0 (success)
 */
int _isupper(int c)

{
	for(c = 'a'; c <= 'z'; c++)
	{
		for (c = 'A'; c <= 'Z')
		{
			return (1);
		}

		return (0);
	}
}
