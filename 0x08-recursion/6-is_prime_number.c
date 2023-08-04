#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or otherwise
 * @n: number to test
 * Return: 1 if n is a prime number, return 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 * @n: number to test
 * @i: iterator
 * Return: 1 if n is a prime, return 0 if otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
