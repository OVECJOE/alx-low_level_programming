#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a', y = 'A';

	for (; x <= 'z'; x++)
		putchar(x);
	for (; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
