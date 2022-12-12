#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int huns;
	int tens;
	int units;

	for (huns = 48; huns < 58; huns++)
	{
		for (tens = 48; tens < 58; tens++)
		{
			if (tens > huns)
			{
				for (units = 48; units < 58; units++)
				{
					if (units > tens)
					{
						putchar(huns);
						putchar(tens);
						putchar(units);
						if (huns == 55 && tens == 56 && units == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

