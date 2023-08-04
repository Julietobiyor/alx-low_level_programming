#include "main.h"

/**
 * _strlen_recursion - to get the string length
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of the string
 * @s: string to test
 * @i: iterator
 * @le: string length
 * Return: 1 if palindrome, 0 if otherwise
 */

int compare_string(char *s, int i, int le)
{
	if (*(s + i) != *(s + le - 1))
		return (0);
	if (i >= le)
		return (1);
	return (compare_string(s, i + 1, le - 1));
}

int compare_string(char *s, int i, int le);
int _strlen_recursion(char *s);

/**
 * is_palindrome - confirm if a string is a palindrome
 * @s: string to test
 * Return: 1 if string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s)));
}
