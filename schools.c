#include <stdio.h>

/*
 * main - prints the number of students in each registered school.
 * Return: 0
 * Code by Masino.
 */

int main(void)
{
	char sch;

	printf("Enter the University name here...\n");
	scanf("%c\n", &sch);
	if (sch == 'A')
		printf("The total number of students here is 3094\n");
	else if (sch == 'B')
		printf("The total numbetr of students here is 6777\n");
	else if (sch == 'C')
		printf("The students here are 2999 in number\n");
	else
		printf("Sorry!\nNot registered\n");
	return (0);
}
