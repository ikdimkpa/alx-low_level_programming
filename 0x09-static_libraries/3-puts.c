#include "main.h"
#include "main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	
	_putchar('\n');
}
