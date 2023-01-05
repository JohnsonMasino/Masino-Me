#include <stdio.h>

/*
 * main - prints a string
 * Return: Always 0
 * Code by Masino
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
