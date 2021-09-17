#include "holberton.h"

/**
 * _strncpy - copies a string from src to dest. | Behaves exactly
 * strncpy() function.
 * @dest: the variable to store copied string.
 * @src: the string  to be copied
 * @n: the number of bytes to be copied.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
