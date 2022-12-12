#include <stdio.h>
/**
 * main: Entry point
 * Return: Always returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	return (0);
}
