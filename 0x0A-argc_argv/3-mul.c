#include <stdio.h>
#include <stdlib.h>

/**
 * main - function is to write a programme that multiplies two number
 * @argc: argument count
 * @argv: argument vector contains the command line programme argument
 * Return: gives 0 if sucessful
 */

int main(int argc, char  *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
