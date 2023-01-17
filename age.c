#include <stdio.h>

/**
 * main - prints the age of a person using if statement.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int age;

	printf("Enter age please...\n");
	scanf("%d", &age);

	if (age > 20)
	{
		printf("This age is capable of applying for the job\n");
		printf("Get your application submitted quickly Sir/Ma!\n");
	}
	printf("Nothing for now\n");
	return (0);
}
