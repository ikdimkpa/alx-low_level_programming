#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: 0 on success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
