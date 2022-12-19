#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int i, j, k, t;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	k = 0;
	j = i - 1;
	while (k < j)
	{
		t = s[k];
		s[k] = s[j];
		s[j] = t;
		k++;
		j--;
	}
}
