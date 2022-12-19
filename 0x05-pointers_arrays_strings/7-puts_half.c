#include "main.h"

/**
 * puts_half - Print half of a string followed by a new line
 * @str: Input string
 */
void puts_half(char *str)
{
	int first, half;

	first = 0;
	while (str[first] != 0)
		first++;
	half = first / 2;
	if (first % 2 == 1)
		half++;
	while (half < first)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
