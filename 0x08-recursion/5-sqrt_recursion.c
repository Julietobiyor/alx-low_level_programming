#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer to calculate the sqrt
 * Return: -1 or returns the result of squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - to finds the natural sqrt of a number
 * @n: number to calculate the square root
 * @i: iterator
 * Return: the result of sqrt
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
