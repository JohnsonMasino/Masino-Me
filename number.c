#include <stdio.h>

/*
 * main - prints the number of students.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int sch;

	printf("Enter the number representing school\n");
	scanf("%d\n", &sch);
	switch (sch)
	{
	case 1:
		printf("The number of students here is 3044\n");
		break;
	case 2:
		printf("The number of students here is 4433\n");
		break;
	case 3:
		printf("The number of students here is 10333\n");
		break;
	default:
		printf("All done now\n");
	}
	return (0);
}
