#include "main.h"
/**
 * print_rev - a function that prints a string, in reversed.
 *
 * @s: pointer argument.
 */

	void print_rev(char *s)
{
	int count = 0, index;

	while (s[index++])

		count++;

	for (index = count - 1; index >= 0; index--)
{
	_putchar(s[index]);
}
	_putchar('\n');
}
