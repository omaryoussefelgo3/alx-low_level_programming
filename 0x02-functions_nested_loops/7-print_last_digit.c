#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @n: is the last number
 * Return: The last value of the number
 */

int print_last_digit(int n)
{
	int lastdig;

	if (n < 0)
	{
		lastdig = -1 * (n % 10);
		return (_putchar(lastdig + 48));
	}
	else if (n > 0)
	{
		lastdig = (n % 10);
		return (_putchar(lastdig + 48));
	}
}
