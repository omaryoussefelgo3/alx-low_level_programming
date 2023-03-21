#include <stdio.h>
/**
  * main - Entry point
  * Descroiption
  * Return: 0 (Success)
  */

int main(void)
{
	char ch = 'a';
	char chrr = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chrr <= 'Z')
	{
		putchar(chrr);
		chrr++;
	}
	putchar('\n');
	return (0);
}
