#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
