#include "holberton.h"

/**
 * _strncat - concatenates n number of characters
 * from src to dest
 * @dest: destination string.
 * @src: the source to be concatenated.
 * @n: the number of bytes of src to be concatenated.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *ptr;

	for (len = 0; dest[len] != '\0'; len++)
		;
	ptr = dest + len;
	while (*src != '\0' && n--)
		*ptr++ = *src++;

	*ptr = '\0';
	return (dest);
}
