#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
		else
			putchar('9');
	}
	return (0);
}
