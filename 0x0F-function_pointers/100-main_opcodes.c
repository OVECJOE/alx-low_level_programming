#include <stdio.h>
#include <stdlib.h>

/**
 * main - the starting function. Receives an argument.
 * @argc: the number of arguments + 1
 * @argv: an array of passed arguments including program's name
 *
 * Return: 0 on Success, else 1 or 2 depending on the failed condition
 */
int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *arr_code;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	arr_code = (char *)main;

	for (i = 0; i < n_bytes; i++)
	{
		if (i == n_bytes - 1)
		{
			printf("%02hhx\n", arr_code[i]);
			break;
		}
		printf("%02hhx ", arr_code[i]);
	}
	return (0);
}

