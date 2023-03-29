#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: char
 * Return: void.
 *
 */

void rev_string(char *s)
{
	int i, k;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (k = 0; k < i / 2 ; k++)
	{
		temp = s[k];
		s[k] = s[i - 1 - k];
		s[i - 1 - k] = temp;
	}
}
