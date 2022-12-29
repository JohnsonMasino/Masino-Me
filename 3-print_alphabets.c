#include <stdio.h>

/*
 * main - prints alphabet in lowercase and then in upper case
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
