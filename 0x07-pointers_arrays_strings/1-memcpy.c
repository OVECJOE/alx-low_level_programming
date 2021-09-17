#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area "src" to memory area "dest"
 * @dest: the memory area destination.
 * @src: the memory area source.
 * @n: the number of bytes to copy from "src"
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

