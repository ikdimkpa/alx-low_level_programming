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
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; b != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("%s\n", "Error");
			break;
			return (1);
		}
		if (*argv[i] >= 'A' && *argv[i] <= 'Z')
		{
			printf("%s\n", "Error");
			break;
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
