#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check
 *  index in array if it matches
 *
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool b;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			b = cmp(array[i]);
			if (b)
				return (i);
			i++;
		}
	}
	return (-1);
}
