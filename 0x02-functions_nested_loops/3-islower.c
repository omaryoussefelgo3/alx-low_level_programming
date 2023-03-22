#include"main.h"

/**
 * _islower - function checks if
 *	character is lowercase
 *
 * @c: checks the input of the function
 *
 * Return: 1 if 'c' is lowercase
 *	 otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		_putchar(1);
		return (0);
	_putchar('\n');
}
