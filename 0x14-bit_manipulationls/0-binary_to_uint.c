#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		n <<= 1;
		if (*b == '1')
			n += 1;
		else if (*b != '0')
			return (0);
		++b;
	}
	return (n);
}
