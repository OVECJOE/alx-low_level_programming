#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied to another portion of memory.
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
