#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of the arraiiy
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
