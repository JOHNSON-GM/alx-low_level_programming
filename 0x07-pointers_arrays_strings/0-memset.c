#include "main.h"

/**
 *  _memset - fill n bytes of memory with a constant value
 *  @s: pointer to memory area
 *  @b: constant value
 *  @n: number of bytes to fill
 *  Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

int size = n; /*accept positive sizes */


if (size > 0)
{
	int x;

	for (x = 0; x < size; x++)
		s[x] = b;

}
return (s);
}
