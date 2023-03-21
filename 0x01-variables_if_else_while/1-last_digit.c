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
		if (n > 5)
		{
			printf("The Last digit of %d is %d and is greater than 50", n, digit);
		}
		else if (n == 0)
		{
			printf("The Last digit of %d is %d and is 0 ", n, digit);
		}
		else if (n < 6 && n != 0)
		{
			printf("The Last digit of %d is %d less than 6 and not 0", n, digit);
		}
		return (0);
}
