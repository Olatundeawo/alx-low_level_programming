#include "main.h"
/**
 * print_rev - a function that prints a string, in reversed.
 *
 * @s: pointer argument.
 */

	void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len > 0)
{
	s--;
	_putchar(*s);
	len--;
}
	_putchar('\n');
}
