#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest: is char
 * @src: is char
 * @n: is int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
