#include <stdio.h>

/*
 * main - Prints alphabets in reverse lower case using putchar,
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');

	return (0);
}
