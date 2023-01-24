#include <stdio.h>

/*
 * main - grades the marks of students using switch.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int num;

	printf("Enter number between 1 & 7\n");
	scanf("%d\n", &num);
	switch (num)
	{
		case 7:
			printf("The grade here is F\n");
			break;
		case 6:
			printf("The grade here is E\n");
			break;
		case 5:
			printf("The grade here is D\n");
			break;
		case 4:
			printf("The grade here is C\n");
			break;
		case 3:
			printf("The grade here is B\n");
			break;
		case 2:
			printf("The grade here is A\n");
			break;
		case 1:
			printf("The garde here is A+\n");
			break;
		default:
			printf("Not recognised!\n");
	}
	return (0);
}
