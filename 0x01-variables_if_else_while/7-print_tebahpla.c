#include <stdio.h>

/**
 * main - entry point
 * Rev
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		getchar(i);
	}
	getchar('\n');
	return (0);
}
