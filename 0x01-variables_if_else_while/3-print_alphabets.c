#include <stdio.h>
/**
  * main - Entry point
  * Descroiption
  * Return: 0 (Success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
