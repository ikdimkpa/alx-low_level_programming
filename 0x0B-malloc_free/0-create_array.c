#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: char that initializes array c.
 * @c: array of characters
 *
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
