#include <stdio.h>

/*
 * main - indicates if a number is a positive or negative number.
 * Return: Always 0 (Success).
 * Code by Masino.
 */

int main(void)
{
	int a;

	printf("Enter your number here");
	scanf("%d", &a);
	if (a < 0)
		printf("This number is a negative number\n");
	else if (a > 0)
		printf("This number is a positive number\n");
	else
		printf("This number is zero\n");
	return (0);
}
