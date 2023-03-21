#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: input value
 * @src: input value
 *
 * Return: concatinated dest and src strings
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	index = 0;
	while (src[index])
	{
		dest[dest_length++] = src[index];
		index++;
	}

	return (dest);
}
