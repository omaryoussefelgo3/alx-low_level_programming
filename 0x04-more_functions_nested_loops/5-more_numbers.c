#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + 48);

		}
		for (k = 0; k <= 4; k++)
		{
			_putchar('1');
			_putchar(k + 48);
		}
	}
}
