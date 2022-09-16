#include "main.h"
/**
 * print_most_numbers - print an integer from 0 to 9 but not 2 and 4.
 *
 * Return: Always 0.
 */

	void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 4 || i == 2)
		{
			continue;
		}
		_putchar(i + '0');
	}
		_putchar('\n');
}
