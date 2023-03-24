#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
  * positive_or_negative - Entry point
  * check it is positive or negative
  * @n: is integer num
  * Return: Always 0 (Success)
  */

int positive_or_negative(int n)
{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
