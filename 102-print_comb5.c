#include <stdio.h>

/*
 * main - Prints combinations of two two-digit numbers,
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	int m, j;

	for (m = 0; m < 100; m++)
	{
		for (j = 0; j < 100; j++)
		{
			if (m < j)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (m != 98 || j != 99)
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
