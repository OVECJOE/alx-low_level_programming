#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string to be copied
 * @s2: second string to be copied
 *
 * Return: newly allocated portion of memory containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_len = 0, s2_len = 0;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	size = s1_len + s2_len;
	concat = malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; i < size && j < s2_len; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
