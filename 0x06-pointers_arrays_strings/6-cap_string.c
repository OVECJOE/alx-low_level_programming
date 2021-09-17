#include "holberton.h"

/**
 * cap_string - capitalize all words of a string.
 * @s: the string to be manipulated.
 *
 * Return: s.
 */
char *cap_string(char *s)
{
	int len, j;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (len = 0; s[len] != '\0'; len++)
	{
		if (len == 0 && s[len] >= 97 && s[len] <= 122)
			s[len] -= 32;

		for (j = 0; j < 13; j++)
			if (s[len] == sep[j])
				if (s[len + 1] >= 97 && s[len + 1] <= 122)
					s[len + 1] -= 32;
	}
	return (s);
}

