#include <stdio.h>

/**
 * main - prints its name
 * @argc: the number of arguments passed.
 * @argv: the pointer to an array of pointers.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}

