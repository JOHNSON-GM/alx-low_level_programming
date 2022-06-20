#include "main.h"

/**
* _strspn - return length of string that match values consistently
* @s: string to search
* @accept: target match
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{

	int x = 0, y;
	int match = 0;

while (s[x] != '\0') /*loop through string*/
{
	
	for (y = 0; accept[y] != '\0'; y++) /*loop through target*/
	{
		
		if (s[x] == accept[y]) /*record at first match*/
		{
			match++;
			break;
		}
		
		if (accept[y + 1] == '\0' && s[x] != accept[y])
			return (match);/*return if  doesn't match*/
	}
	x++;

}
return (match); /* return num if all match till end */


}
