#include <stdio.h>

/*
 * main - prints the sum of two numbers.
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	int  a, b, sum;

	printf("Input your age and the sum will be calculated for you\n");
	scanf("%d %d\n", &a, &b);
	sum = a + b;
	printf("The sum is: %d\n", sum);
	return (0);
}
