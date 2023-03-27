#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n:  is the number of times the character \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= i; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
