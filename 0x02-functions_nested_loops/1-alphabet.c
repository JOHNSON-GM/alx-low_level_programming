#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that returns void
 * main - entry point
 * declaration : print_alphabet in small letters
 *
 * Return:void
 */

void print_alphabet(void)

{

	int alphabets = 'a';

	while (alphabets <= 'z')

	{

		_putchar(alphabets);

		alphabets++;

	}

	_putchar('\n');
	return (0);

}
