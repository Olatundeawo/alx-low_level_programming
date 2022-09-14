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
		unsigned long int a, b, c, d, s;
    
  a = 4000000;
  b = 0;
  c = 1;
  d = 0;
  s = 0;
		while (a > d)
		{
			d = b + c;

			if ((d % 2) == 0)
			{
				sum += d;
			}

			b = c;
			c = d;
		}
		printf("%li\n", s);
		return (0);
}
