#include <stdio.h>

/**
 * main - main function that prints it's name, followed by a new line.
 * @argc: argument count.
 * @argv: arguments vector.
 * Return: (0) always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
