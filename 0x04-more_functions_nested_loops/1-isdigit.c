#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: Data to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 0 || c < 0) && !(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	printf("\n");
}
