#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of the arraiiy
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	index = n - 1;
	while (index >= n / 2)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
		index--;
	}
}
