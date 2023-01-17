#include <stdio.h>

/*
 * main - shows the performance of getchar,getch ,getche and gets.
 * Return: Always 0 (Success)
 * Code by Masino.
 */

int main(void)
{
	char ch;

	ch = getchar();
	printf("%c", ch);
	return (0);
}
