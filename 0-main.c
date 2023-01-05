#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 * Return: Always 0.
 * Code by Masino
 */

int main(void)
{
	int n;

	printf("Size 'char': %lu bytes\n", sizeof(char));
	printf("Size 'int': %lu bytes\n", sizeof(int));
	printf("Size 'float': %lu bytes\n", sizeof(float));
	printf("Size of my variable on my computer: %lu bytes\n", sizeof(n));
	return (0);
}
