#include "main.h"

/**
 * _strncat - function
 * @dest: char
 * @src : char
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\n';
	return (dest);
}
