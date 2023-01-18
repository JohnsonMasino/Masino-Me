#include <stdio.h>

/*
 * main - grades students marks.
 * Return: 0
 * Code by Masino.
 */

int main(void)
{
	int mark;
	char dept;

	printf("Welcome to Esut College Of Medicine!!!\n");
	printf("We need only the first letter of your department\n");
	printf("M is for Medicine and Surgery.\nL is for Lab Sci.\nN is for Nursing Sci.\nA is for Anatomy\n");
	printf("Enter the first letter of your department...\n");
	scanf("%c", &dept);
	printf("Enter student's total score here!\n");
	scanf("%d", &mark);
	if (mark >= 0 && mark < 40)
		printf("The grade for this student is is F\n");
	else if (mark >= 40 && mark < 50)
		printf("The grade fir this students is D\n");
	else if (mark >= 50 && mark < 60)
		printf("The grade for this student is C\n");
	else if (mark >= 60 && mark < 70)
		printf("The grade for this student is B\n");
	else if (mark >= 70 && mark < 85)
		printf("The grade for this student is A\n");
	else if (mark >= 85 && mark < 101)
		printf("The grade for this student is A+\n");
	else if (mark > 100)
		printf("Oops!\nMark above 100 is unrecognised\nPlease contact your course cordinator!\n");
	else
		printf("Negative score!\nYou owe some marks!\n");
	return (0);
}
