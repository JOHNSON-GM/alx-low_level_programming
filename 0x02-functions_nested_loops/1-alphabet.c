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

	int alphabet = 'a';

	while (alphabet <= 'z')

	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');

}
