#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints the last digit of an input
 * return:0
 * Code by Masino
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (m > 5)
	{
		printf("and is greater than 5");
	}
	if (m == 0)
	{
		printf("and is 0");
	}
	if (m < 6 && m != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
