#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int tens;
	int units;

	for (tens = 0; tens <= 9; tens++)
	{
		for (units = tens + 1; units <= 9; units++)
		{
			putchar(tens + '0');
			putchar(units + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
