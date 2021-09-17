#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments passed to the prompt
 * @argc: the arguments counter
 * @argv: the array of passed arguments which includes
 * the program itself
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (EXIT_SUCCESS);
}

