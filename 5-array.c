#include <stdio.h>

int main(void)
{
	int marks[5], i;
	int sum = 0;
	int avg;

	printf("Enter the marks of all students:");
	for(i = 0; i < 5; i++)
	{
		scanf("\n%d", &marks[i]);
	}
	for(i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum/5;
	printf("Sum = %d\n", sum);
	printf("Average = %d\n", avg);
	return (0);
}
