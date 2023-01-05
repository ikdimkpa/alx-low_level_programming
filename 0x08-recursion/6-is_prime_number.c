#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to be checked
 *
 * Return:1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	int prime = 0;

	if (n < 2)
		prime = 0;
	else if (n == 2)
		prime = 1;
	else if (n % 2 == 1)
		prime = 1;

	return (prime);
}
