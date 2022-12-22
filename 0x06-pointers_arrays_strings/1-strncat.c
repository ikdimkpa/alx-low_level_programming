#include "main.h"

/**
 * _strncat - concatinate two strings
 * @dest: input value
 * @src: input value
 * @n: number of bytes
 *
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index;
	int dest_length;

	index = 0, dest_length = 0;
	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
