#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all its parameters,
 * or 0 if there are no parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lt;
	unsigned int i;
	unsigned int sum = 0;

	va_start(lt, n);
	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && n > 0)
	{
		sum += va_arg(lt, int);
		i++;
	}
	return (sum);
}
