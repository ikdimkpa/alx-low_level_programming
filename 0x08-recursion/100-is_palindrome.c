#include "main.h"
/**
 * _length - checks the length of a string
 * @s:string
 *
 * Return: length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checks - check if string is a palindrome
 * @i: index
 * @l: length of string
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */
int checks(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
			return (checks(i + 1, l - 1, s));
		else if (s[i] != s[l])
			return (0);
		else
			return (1);
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s:  string to be checked
 *
 * Return: 1 if s is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	return (checks(0, _length(s) - 1, s));
}
