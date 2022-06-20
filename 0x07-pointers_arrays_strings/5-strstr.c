#include "main.h"
#define NULL 0

/**
* _strstr - locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring to search for
* Return: pointer to index of string at first occurence of whole substring
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, y, x;

if (needle[0] == '\0')
return (haystack);

while (haystack[i] != '\0') /* iterate through haystack */
{
if (haystack[i] == needle[0])
{

x = i, y = 0;
while (needle[y] != '\0')
{
if (haystack[x] == needle[y])
x++, y++;
	else
			break;
}
if (needle[y] == '\0')
{
	return (haystack + i);
}
}
i++;
}
return (NULL); /* No match */
}
