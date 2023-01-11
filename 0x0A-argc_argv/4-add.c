#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success, or 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int x, y, sum;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
