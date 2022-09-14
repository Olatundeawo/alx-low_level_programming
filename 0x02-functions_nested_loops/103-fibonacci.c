#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - fibonacci
 *
 * Return: (0) always
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c = 3;
	unsigned int d = 2;
	unsigned int s = 2;

	for (d; d <= 32; d++)
	{
		if (c % 2 == 0)
			s = s + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", s);
	return (0);
}
