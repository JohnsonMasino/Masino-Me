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
	int num;

	printf("Enter an input here!\n");
	scanf("%d", &num);
	scanf("%c", &alph);
	if (num >= 0 && num < 10000)
		printf("This input is a number within specified range\n");
	else if (alph >= 'a' && alph <= 'z')
		printf("This input is a lower case alphabet\n");
	else if (alph >= 'A' && alph <= 'Z')
		printf("This input is an upper case alphabet\n");
	else
		printf("Not recognised here!\n");
	return (0);
}
