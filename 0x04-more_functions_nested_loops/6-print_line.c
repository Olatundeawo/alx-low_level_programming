#include "main.h"
/**
 * print_line - Print line dependent on the integer n.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
