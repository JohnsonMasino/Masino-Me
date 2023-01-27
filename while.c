#include <stdio.h>

/*
 * main - returns an input using printf.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	char ch = 'a';

	while (ch++)
	{
		printf("%d\n", ch);
		ch++;
	}
	return (0);
}
