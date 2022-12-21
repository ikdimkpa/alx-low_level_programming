#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: output string
 * @src: input string
 * @n: number of bytes
 *
 * Return: concatinated strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
