#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	n %= 10;
	printf("%d and ", n);
	if (n > 5)
		printf("is greater than 5\n");
	else if (n == 0)
		printf("is 0\n");
	else if (n < 6 && n != 0)
		printf("is less than 6 and not 0\n");
	return (0);
}
