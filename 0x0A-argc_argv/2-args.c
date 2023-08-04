#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - function is to write the program of all arguments received
 * @argc: argument count
 * @argv: arguments vector that contains the programm command line
 * Return: give 0 if successful
 */

int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
