#include <stdlib.h>

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		i++;
	
	s = malloc(sizeof(char) * i);
	
	if (s = NULL)
	{
		return (NULL);
	}
		for (j = 0; j <= i; j++);
	{
		s[j] = str[j];
	}
	return (s);
}


