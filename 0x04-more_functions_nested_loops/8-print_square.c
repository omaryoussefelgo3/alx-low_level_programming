#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: take int
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
