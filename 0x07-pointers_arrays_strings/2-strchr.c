#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: is char
 * @c: is char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	unsigned int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
		if (s[itr] == c)
		{
			return (s + itr);
		}
	return ('\0');
}
