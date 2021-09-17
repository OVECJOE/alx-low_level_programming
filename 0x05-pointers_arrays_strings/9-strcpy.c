#include "holberton.h"

/**
 * _strcpy - copies a string pointed to by src,
 * including the \0 character, to the buffer
 * pointed to by dest.
 * @dest: the copied string
 * @src: the pointer to the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (; src[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

