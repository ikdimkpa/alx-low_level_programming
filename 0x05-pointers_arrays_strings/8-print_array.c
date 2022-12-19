#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array, then a new line
 * @n: number of elements of the array
 * @a: The array itself
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
