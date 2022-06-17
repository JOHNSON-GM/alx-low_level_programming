#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer
 * @s: bytes of buffer
 * @l: line of buffer
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int x, y;

for (x = 0; x <= 9; x++)
{
	if (x <= s)
		printf("%02x", c[l * 10 + x]);
	else
		printf("  ");

	if (x % 2)

		putchar(' ');

}
for (y = 0; y <= s; y++)
{
	if (c[l * 10 + y] > 31 && c[l * 10 + y] < 127)
		putchar(c[l * 10 + y]);
	else
		putchar('.');

}

}

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a;
for (a = 0; a <= (size - 1) / 10 && size; a++)

{
	printf("%08x: ", a * 10);
	if (a < size / 10)

{
	print_line(b, 9, a);

}
else

{
	print_line(b, size % 10 - 1, a);

}
putchar('\n');

}
if (size == 0)
	putchar('\n');

}
