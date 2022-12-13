#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: Argument of the function print_last_digit
 * Return: Last number of the argument
 */
int print_last_digit(int i)
{
	int result;

	result = i % 10;

	if (result < 0)
		result *= -1;

	return (printf("%d\n", result));
}
