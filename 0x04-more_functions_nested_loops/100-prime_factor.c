#include <stdio.h>

/**
 * main - finds and prints the largest factor of the number 612852475143
 * followed by a new line.
 *
 * Return: Always 0;
 */
int main(void)
{
	long i = 2, n = 612852475143;

	for (; i <= n; i++)
		if (!(n % i))
		{
			n /= i;
			i--;

		}
	printf("%lu\n", i);
	return (0);
}

