#include "main.h"
#include <stdio.h>

/**
 * main - Print 1 to 100, but Fizbuzz for multiples of 5
 * and Fizz for multiples of 3
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Buzz");
		else if (n % 5 == 0)
			printf(" Fizz");
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
