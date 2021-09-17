#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string to encode.
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;

	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; a[j] != '\0'; j++)
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
	return (s);
}
