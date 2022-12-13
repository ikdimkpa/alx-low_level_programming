#include "main.h"
/**
 * print_sign - checks if a number is positive, zero, or negative
 * @n: Argument of the function print_sign
 * Return: 1 is positive, 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
