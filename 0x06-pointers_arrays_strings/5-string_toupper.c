#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @str: pointer to string
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] > 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
