#include <stdio.h>

/*
 * main - prints the age of a person.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	unsigned int age;

	printf("Enter age please!...\n");
	scanf("%u", &age);

	if (age > 16 && age <= 35)
		if (age == 16)
			printf("Hey! Sweet sixteen, you are welcome to the party!!!\n");
	printf("You are an adult and eligible\n");
	return (0);
}
