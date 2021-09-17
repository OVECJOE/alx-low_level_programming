#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}
