#include <stdio.h>
/**
 * main - entry point
 *
 * Return: every time give 0
 *
 */
int main(void)
{
	int m;
	int j;
	int k;

	for (m = 0; m <= 9; m++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (k > j && j > m)
				{
					putchar(m + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (m != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
