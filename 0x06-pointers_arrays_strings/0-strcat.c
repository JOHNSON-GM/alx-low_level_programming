#include "main.h"

/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
*/

char *_strcat(char *dest, char *src)
{
	int length, x;

	length = 0;
while (dest[length] != '\0')
{
	length++;

}
for (x = 0; src[x] != '\0'; x++, length++)

{
	dest[length] = src[x];
}
dest[length] = '\0';
return (dest);
}
