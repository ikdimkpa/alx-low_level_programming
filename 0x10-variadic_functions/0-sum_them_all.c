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
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lt, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(lt, int);
		i++;
	}
	va_end(lt);
	return (sum);
}
