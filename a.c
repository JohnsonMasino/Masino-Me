#include <stdio.h>

/**
 * main - prints a condition for if a is true or not.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a;

	printf("Enter a value\n");
	scanf("%d", &a);
	if (a)
		printf("Correct! this is inside this IF block\n");
	printf("This is no longer in the IF block\n");
	return (0);
}
