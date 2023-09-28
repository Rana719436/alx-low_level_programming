#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int two, base;

	if (!b)
		return (0);

	u = 0;

	for (two = 0; b[two] != '\0'; two++)
		;

	for (two--, base = 1; two >= 0; two--, base *= 2)
	{
		if (b[two] != '0' && b[two] != '1')
		{
			return (0);
		}

		if (b[two] & 1)
		{
			u += base;
		}
	}

	return (u);
}
