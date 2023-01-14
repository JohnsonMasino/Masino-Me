#include <stdio.h>

/*
 * main - prints the resu8lts of some operations using printf
 * Return: 0
 * Code by Masino
 */

int main(void)
{
	int a, b, c;
	int sum;

	a = 5;
	b = a++;
	c = ++a;
	sum = a + b + c;

	printf("The value of a is: %d\n", a);
	printf("And the value of b is: %d\n", b);
	printf("The value of c also is: %d\n", c);
	printf("The total of all is calculated to be: %d\n", sum);

	return (0);
}
