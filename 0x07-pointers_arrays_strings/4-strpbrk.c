#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in "s" of any bytes in "accept"
 * @s: the string to bw scanned
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the first matching character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	return (0);
}

