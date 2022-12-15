#include <stdio.h>

/**
 * main - computes and prints all multiples of 3 and 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	int n;
	int result;

	n = 0;
	result = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			result += n;
		}
		n++;
	}
	printf("%d", result);
	return (0);
}
