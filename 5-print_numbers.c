#include <stdio.h>

/*
 * main - prints all single digit numbers of base 10 from 0 using printf
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
