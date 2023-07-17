#include <stdio.h>
/**
 * main - entry point
 *
 * Return: every time give 0
 *
 */
int main(void)
{
	int n;
	int m;

	for (n = 10; n <= 19; n++)
	{
		for (m = 10; m <= 19; m++)
		{
			if ((m % 10) > (n % 10))
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n != 18 || m != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
