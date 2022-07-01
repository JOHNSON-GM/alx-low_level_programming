#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a;
	char *str, *ptr;

	if (n >= strlen(s1))

	a = strlen(s1);

	else
		s1 = "";

	if (n >= strlen(s2))

		s2 = "";

	else
		n = strlen(s2);

	printf("str:%s\n", s1);

	printf("str:%s\n", s2);




	str = malloc(a + n + 1);
	printf("str:%s\n", str);

	if (str == NULL)

		return (NULL);

	ptr = str;

	while (*s1)

		*ptr++ = *s1++;

	while ((*ptr++ = *s2++))
		;
	return (str);
}
