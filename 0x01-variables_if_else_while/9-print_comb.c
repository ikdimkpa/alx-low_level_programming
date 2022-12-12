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
		putchar(n + '0');

		while (n < 9)
		{
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	putchar('\n');
	return (0);
}
