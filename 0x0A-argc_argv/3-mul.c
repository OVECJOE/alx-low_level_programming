#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the product of two integers to the stdout
 * @argc: the number of passed arguments
 * @argv: the array of passed arguments
 *
 * Return: the product if argc == 2, else 1
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	if (argc == 3)
	{
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
	puts("Error");
	return (1);
}

/**
 * _atoi - extracts integer from string
 * @s: the string to be parsed
 *
 * Return: integer if integer is present in s, else 0
 */
int _atoi(char *s)
{
	int FLAG = 0, len, n = 0, d = 0, digit, i;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len && !FLAG; i++)
	{
		if (s[i] == '-')
			d++;

		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			FLAG = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			FLAG = 0;
		}
	}
	if (!FLAG)
		return (0);
	return (n);
}
