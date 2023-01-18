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
	int res;

	res = -1;
	if  (array && cmp)
	{
		if (size < 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		if ((cmp(array[i])) > 0)
		{
			res = i;
			break;
		}
		if ((cmp(array[i]) == (-1)))
			return (res);
		}
	}
	return (res);
}
