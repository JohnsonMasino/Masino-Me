#include <stdio.h>

/*
 * main - prints the sum of two numbers using printf.
 * Return: Always 0 (Success).
 * Code by Masino
 */

int main(void)
{
	int a, b, sum;

	printf("Input two numbers:\n");
	scanf("%d %d\n", &a, &b);
	sum = a + b;
	printf("The sum of these numbers is: %d\n", sum);
	return (0);
}
