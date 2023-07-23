#include "main.h"
/**
 * _isdigit - function that checks (0 through 9)
 *
 * @c: character to check
 *
 * Return: 1 if c is a digit , return 0 if is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
