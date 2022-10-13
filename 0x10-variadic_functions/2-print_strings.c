#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 *@...: string variables
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *c;
	unsigned int i;

	va_start(string, n);


	for (i = 0; i < n; i++)
	{
		c = va_arg(string, char *);

		if (c != NULL)
		printf("%s", c);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
