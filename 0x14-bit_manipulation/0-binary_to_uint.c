#include "main.h"

/**
 * binary_to_unit - converts binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	int k;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal = 2 * decimal + (b[k] - '0');
	}

	return (decimal);
}
