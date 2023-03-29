#include "main.h"

/**
 * function that prints half of a string, followed by a new line.
 * @str: char parameter
 * Return: void
 */

void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (l % 2 == 1)
	{
		for (i = (l - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
