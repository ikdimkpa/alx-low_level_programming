#include "main.h"
/**
 * _isalpha - Checks if a char is an alphabet or not
 * @c: Argument of the function _isalpha
 * Return: 1 if alphabet, else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
