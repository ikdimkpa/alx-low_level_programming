#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 */

void print_numbers(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
