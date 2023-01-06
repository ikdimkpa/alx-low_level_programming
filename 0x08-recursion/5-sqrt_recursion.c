#include "main.h"

/**
 * help - checks if square root of number exists
 * @num: number
 * @sqtr: possible square root
 *
 * Return: square root of number or -1 for error
 */
int help(int num, int sqtr)
{
	if (sqtr * sqtr == num)
		return (sqtr);
	else if (sqtr * sqtr > num)
		return (-1);
	else
		return (help(num, sqtr + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be square-rooted
 *
 * Return: square errt of n, or -1 on failure
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (help(n, 0));
}
