#include <stdio.h>

/*
 * main - prints a name using printf in do while loop in c.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i = 0;

	do {
		printf("Masino here!\n");
		i++;
	} while (i > 0);
	printf("out of loop\n");
	return (0);
}
