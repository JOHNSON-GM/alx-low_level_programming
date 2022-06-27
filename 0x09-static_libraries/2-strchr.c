#include "main.h"
#define NULL 0

/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search
* @c: target characer
* Return: returns pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
		x++;

	if (s[x] == c)

		return (&s[x]);

	else

		return (NULL);

}
