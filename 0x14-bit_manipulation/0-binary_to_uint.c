#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if there is one or more chars
 *  in the string b that is not 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int dec = 0;

	if (!b)
		return (1);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < 0 || b[n] > 1)
			return (0);
		dec = 2 ^ dec + (b[n] - '0');
	}
	return (dec);
}

