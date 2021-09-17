#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: the size of argv
 * @argv: pointers to an array of characters
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}

