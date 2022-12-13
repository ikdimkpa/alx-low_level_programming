#include "main.h"
/**
 *_islower - Checks if an alphabet is lower case
 * @c: Argument of the function _islower
 * Return: 1 if lower case, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
