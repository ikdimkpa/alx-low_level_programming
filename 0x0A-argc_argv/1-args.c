#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * argc: argc parameters
 * argv: an array of a command listed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
