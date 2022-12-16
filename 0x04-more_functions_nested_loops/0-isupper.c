#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks whether a char is upper or lower case
 * @c: input character
 * Return: 1 if c is upper, or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
