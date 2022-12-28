#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints a random number
 * Return: 0
 * Code by Masino
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d n is a negative number\n", n);
	}
	else if (n > 0)
	{
		printf("%d n is positive\n", n);
	}
	else
	{
		printf("%d n is zero\n", n);
	}
	return (0);
}
