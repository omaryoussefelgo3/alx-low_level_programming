#include"main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: it takes integer
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n < 1)
	{
		return (n * -1);
	}
	return (n);
}
