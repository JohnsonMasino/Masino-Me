#include <stdio.h>

/*
 * main - prints numbers
 * Return: Always 0
 * Code by Masino
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100000; num++)
	{
		printf("%d\n", num);
	}
	if (num < 0)
	{
		printf("Negative not advised\n");
	}
	else
	{
		printf("Done Here\n");
	}
	return (0);
}
