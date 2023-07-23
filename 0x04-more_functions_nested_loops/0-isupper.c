#include "main.h"
/**
 * _isupper - checks if uppercase
 * @c: character to be checked
 *
 * Return: gives 1 for uppercase charcter or 0 if is otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
