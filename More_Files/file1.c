#include <stdio.h>
#include <stdlib.h>

/*
 * main: prints a statement depending on an input
 * return: Always 0
 * code developed by Masino
 */

int main(void)
{
	int age;

	printf("Hi enter your age here:\n");
	scanf("%d", &age);
	//printf("%d is a good age.\n", age);
	if (age < 1)
		printf("Age can not be less than 1\n");
	else if (age > 1 && age < 13)
		printf("You are still a child\n");
	else if (age > 12 && age < 20)
		printf("You are a teenager\n");
	else if (age > 19 && age < 121)
		printf("You are an adult\n");
	else if (age > 120)
		printf("Unexpected age range\n");
	else
		printf("Unknown\n");

	printf("\nCode developed by Masino\n");

	return (0);
}
