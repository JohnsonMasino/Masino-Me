#include <stdio.h>

/**
 * main - prints arrays of a pointer of an int variable
 * Return: Always 0.
 * Code by Masino
 */

int main(void)
{
	int i;
	int a[5];

	printf("enter the array elements:");
	for(i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < 5; i++)
		printf("\narray element at index %d is: %d" ,i,a[i]);

	return (0);
}
