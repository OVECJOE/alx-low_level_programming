#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: the string to be scanned
 * @needle: substring to match
 *
 * Return: pointer to the beginning of the located
 * substring, NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *pattern;

	while (*haystack)
	{
		str1 = haystack;
		pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (str1);

		haystack = str1 + 1;
	}
	return (0);
}

