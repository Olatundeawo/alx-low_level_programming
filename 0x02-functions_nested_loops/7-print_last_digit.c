#include "main.h"

/**
* main - Entry point
* print_last_digit - Prints the last digit of a number
* @n: The number to be treated
*
* Return: Value of the last digit of number
*/
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
}
