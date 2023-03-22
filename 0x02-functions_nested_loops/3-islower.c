#include <main.h>

/**
 * _islower - Entry point'
 * Check if it is lower or not
 * Return: 1 or 0
 */

int _islower(int c)
{
	int c;

	if (islower(c) == 1)
	{
		_putchar(1);
	}
	else if (islower(c) == 0)
	{
		_putchar(0);
	}
	_putchar('\n');
}
