#include "main.h"

/**
 * flip_bits - Flips bits
 * @n: First number
 * @m: Second number
 * Return: Unsigned int value of number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
