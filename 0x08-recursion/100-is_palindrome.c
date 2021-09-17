#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: the string to scan
 *
 * Return: 1 if palindrome, else 0 assuming "" is palindrome.
 */
int is_palindrome(char *s)
{
	if (!s)
		return (1);
	return (check_if_palindrome(s, 0, find_strlen(s)));
}

/**
 * find_strlen - finds the length of a string
 * @s: the string whose length is sought
 *
 * Return: the length of s
 */
int find_strlen(char *s)
{
	if (*s != '\0')
		return (1 + find_strlen(s + 1));
	else
		return (0);
}

/**
 * check_if_palindrome - check if string is a palindrome
 * @s: the string to be checked
 * @i: index
 * @len: the length of the s
 *
 * Return: 1 if palindrome,  else 0.
 */
int check_if_palindrome(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_if_palindrome(s, i + 1, len));

	return (0);
}

