#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			needle++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
