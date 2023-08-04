#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - function is to prints the number of argument pass through it
 * @argc: argument count
 * @argv: vector of arguments
 * Return: gives 0 when successful
 */

int main(int argc, char  *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
