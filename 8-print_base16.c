#include <stdio.h>

/*
 * main - Prints base 16 numbers in lower case
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	int number;

	for (number = 0; number <= 16; number++)
		putchar(number);
	putchar('\n');

	return (0);
}
