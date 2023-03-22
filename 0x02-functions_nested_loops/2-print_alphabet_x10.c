#include "main.h"

/**
 * print_alphabet_x10 - to repeat from a-z x10
 * Return nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
	}
}
