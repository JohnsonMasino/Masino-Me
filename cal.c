#include <stdio.h>

/*
 * main - prints the average value of some input of numbers
 * Return: Always 0
 * Code by Masino
 */

int main(void)
{
	int n1, n2, n3, n4, n5, sum, avg;

	printf("Type in your five numbers\n");
	scanf("%d %d %d %d %d\n", &n1, &n2, &n3, &n4, &n5);
	sum = n1 + n2 + n3 + n4 + n5;
	avg = sum / 5;
	printf("The sum of these numbers is: %d\n While the average is: %d\n", sum, avg);
	return (0);
}
