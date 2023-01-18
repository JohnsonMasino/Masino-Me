#include <stdio.h>

/*
 * main - increments sal based on age of workers.
 * Return 0
 * Code by Masino.
 */

int main(void)
{
	int age, sal;

	printf("Enter your age here...\n");
	scanf("%d", &age);
	printf("Enter your salary amount here...\n");
	scanf("%d", &sal);
	if (age >= 35 && sal >= 50000)
		printf("Great! you got $3000 bonus!\n");
	if (age >= 35 && sal < 50000)
		printf("Congrats! you got $2000\n");
	if (age < 35 && sal > 50000)
		printf("Good! you got $1000 bonus\n");
	if (age < 35 && sal < 50000)
		printf("Okay! you got $500 bonus\n");
	return (0);
}
