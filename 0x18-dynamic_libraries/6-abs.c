#include "main.h"
#include <stdlib.h>
#include <inttypes.h>
/**
 * _abs - Computes the absolute value of an integer
 * @i: integer to be computed
 * Return: 0 Always
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else
		return (-i);
}
