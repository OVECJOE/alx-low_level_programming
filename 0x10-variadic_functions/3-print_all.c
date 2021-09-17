#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s, *sep = "";
	int i = 0;
	va_list args_list;

	va_start(args_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args_list, double));
					break;
				case 's':
					s = va_arg(args_list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args_list);
}

