#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to be checked
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
