#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by newline
 * @separator: the string to be printed  between the strings.
 * @n: the number of passed arguments to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!separator || (separator && !i))
			printf("%s", s);
		else if (!s)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, s);
	}

	va_end(list);
	printf("\n");
}

