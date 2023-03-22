#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * new func
 * Return: 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
