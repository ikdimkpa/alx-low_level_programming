#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
