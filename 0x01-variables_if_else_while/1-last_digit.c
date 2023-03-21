#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * the last digit
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
		int n;
		int digit = n % 10;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (digit > 5)
		{
			printf("The Last digit of %i is %i and is greater than 50\n", n, digit);
		}
		else if (digit == 0)
		{
			printf("Last digit of %i is %i and is 0\n", n, digit);
		}
		else if (digit < 6 && digit != 0)
		{
			printf("Last digit of %i is %i less than 6 and not 0\n", n, digit);
		}
		return (0);
}
