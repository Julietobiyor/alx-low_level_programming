#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to print and recurse through
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
