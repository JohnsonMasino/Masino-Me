#include <stdio.h>

/*
 * main - prints alphabets in lowercase using printf
 * return: 0
 * Code by Masino
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
