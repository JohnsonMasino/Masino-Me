#include <stdio.h>

/*
 * main - detects in an input is a lower case or an upper case letter
 * Return: Always 0 (Success)
 * Code by Masino
 */

int main(void)
{
	char alph;

	printf("Enter an input here!\n");
	scanf("%c", &alph);
	if (alph >= 'A' && alph <= 'Z')
		printf("This input is an upper case alphabet\n");
	else if (alph >= 'a' && alph <= 'z')
		printf("This input is a lower case alphabet\n");
	else
		printf("Sorry!\nNot deployed in this database!!!");
	return (0);
}
