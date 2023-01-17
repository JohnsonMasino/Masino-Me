#include <stdio.h>

/**
 * main - prints the sum of two numbers.
 * Return: Always 0 (Successs)
 * Code by Masino.
 */

int main(void)
{
	int a, b, sum;

	printf("Enter two Numbers");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("The sum is: %d\n", sum);
	return (0);
}
