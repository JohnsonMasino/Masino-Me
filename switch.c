#include <stdio.h>

/*
 * main - prints the names of the Children of Mr and Mrs
 * Hyginus Ugwuanyi differently using switch statement.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int num;

	printf("Input the position of the child in number\n");
	scanf("%d\n", &num);
	switch (num)
	{
		case 1:
			printf("The name of the 1st child is Johnson Obinna\n");
			break;
		case 2:
			printf("The name of the 2nd child is Promise Chineche\n");
			break;
		case 3:
			printf("The name of the 3rd child is Collins Ebubechukwu\n");
			break;
		case 4:
			printf("The name of the 4th child is Favour Chisom\n");
			break;
		case 5:
			printf("The name of the 5th child is Innocent Obumneme\n");
			break;
		default:
			printf("Nothing more here!\n");
	}
	return (0);
}
