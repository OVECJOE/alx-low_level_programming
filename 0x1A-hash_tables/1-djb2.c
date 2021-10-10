#include "hash_tables.h"

/**
 * hash_djb2 - the djb2 hashing algorithm
 * @str: string used to generate hash value
 * Return: the hash of @str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash = hash * 33 + c;

	return (hash);
}
