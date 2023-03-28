#include "main.h"

/**
 * print_rev - function that prints a string,in reverse followed by a new line.
 * @s: take char
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
