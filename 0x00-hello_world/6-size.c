#include <stdio.h>

/**
 * main - main function
 * Return: 0 means (Success)
 */

int main(void)
{
	printf("Size of a char : %u byte(s)\n", sizeof(char));
	printf("Size of a int : %u bytes(s)\n", sizeof(int));
	printf("Size of a long int : %u bytes(s)\n", sizeof(long int));
	printf("Size of a long long int : %u bytes(s)\n", sizeof(long long int));
	printf("Size of a float : %u bytes(s)\n", sizeof(float));
	return (0);
}
