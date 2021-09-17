#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
