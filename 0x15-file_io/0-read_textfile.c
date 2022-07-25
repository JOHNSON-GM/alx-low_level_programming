#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads the content of the file
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: always 0 success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t frd, fwr, x;
	char *out;

	if (filename == Null)
		return (0);

	x = fopen(filename, O_RDONLY);

	if (x == -1)
		return (0);

	out = malloc(sizeof (char) * (letters));

	if (out == Null)
		return (0);

	frd = read(x, out, letters);
	fwr = write(STDOUT_FILENO out, frd);

	return (frd);
}
