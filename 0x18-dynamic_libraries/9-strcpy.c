#include "main.h"

/**
 * _strcpy - Copy string from src to dest
 * @src: Where string is copied from
 * @dest: Where string is copied to
 * Return: Copy of *src
 */
char *_strcpy(char *dest, char *src)
{
	char *go = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (go);
}
