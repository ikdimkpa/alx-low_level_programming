#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks whether a char is upper or lower case
 * @c: input character
 * Return: 1 if c is upper, or 0 otherwise
 */
int _isupper(int c)
{
	char uppercsae  = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
