#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ch;

	ch = malloc(b);
	if (ch == NULL)
		exit(98);
	return (ch);
}
