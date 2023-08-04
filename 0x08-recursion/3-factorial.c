#include "main.h"

/**
 * factorial - gives factorial of a given number
 * @n: given number to use
 * Return: returns factor or -1 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
