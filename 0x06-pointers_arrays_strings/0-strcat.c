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
	int a;
	int b;

	a = 0;
	while (dest[a]  != '\0')
		a++;
	b = 0;
	while (b != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
