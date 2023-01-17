#include <stdio.h>

/*
 * main - prints the age of persons.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int age;

	printf("Please enter your age here!\n");
	scanf("%d", &age);
	if (age >= 25 && age <= 30)
	{
		printf("Your age appears to be among the selected age bracket\n");
		printf("Congratulations!!! You are selected\n");
	}
	else
		printf("Sorry! the age is not within the selected age space. Try again!\n");
	return (0);
}
