#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
