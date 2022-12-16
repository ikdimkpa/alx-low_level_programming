#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n;

		for (n = 0; n < 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
