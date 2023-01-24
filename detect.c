#include <stdio.h>
#include <stdlib.h>

/*
 * main - detects if an input is a number or an alphabet.
 * Return: Always 0 (Success)
 * Code by Masino.
 */

int main(void)
{
	char alph;
	int input;

	printf("Enter an input here!\n");
	scanf("%c", &alph);
	scanf("%d", &input);
	if (alph >= 'a' || alph <= 'z')
		printf("This input is an alphabet\n");
	if (input <= 0 || input > 0)
		printf("This input is a number\n");
	else
		printf("Not recognised here!\n");
	return (0);
}
