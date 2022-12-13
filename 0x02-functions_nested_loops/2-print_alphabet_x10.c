#include "main.h"
/**
 * print_alphabet_x10 - Prints all alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int ten;

	ten = 0;

	while (ten < 10)
	{
		char alp;

		alp = 'a';

		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}

		_putchar('\n');
	}
}
