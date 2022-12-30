#include <stdio.h>

/*
 * main - prints alphabets in lowercase using putchar
 * Return: Always 0 (Success)
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
