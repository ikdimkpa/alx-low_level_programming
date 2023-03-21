#include "main.h"

/**
 * _memset - function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: pointer to n
 * @b: constant byte
 * @n: size of memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
