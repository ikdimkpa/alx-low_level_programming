#include "main.h"

/**
 * print_rev - Print a string in reverse and new line
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		for (i = i - 1; s[i] != 0; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
