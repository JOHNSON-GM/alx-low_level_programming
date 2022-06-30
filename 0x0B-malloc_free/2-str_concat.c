#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 * str_concat - Concat 2 strings.
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	 printf("checking:%s",s1);

	if (s1 == NULL)
		s1 = "";
	else
		l1 = _strlen(s1);
	printf("checking:%s\n ",s1);
	printf("checking:%ld\n",sizeof s1);

	if (s2 == NULL)
		s2 = "";
	else
		l2 = _strlen(s2);
	 printf("checking:%s\n",s2);

	conc = malloc(l1 + l2 + 1);
	if (conc == NULL)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;
	 printf("checking:%ld\n",sizeof s1);
	while ((*tmp++ = *s2++));
		;
		
	 printf("tmp:%c ",*tmp);
	 
	return (conc);
}
