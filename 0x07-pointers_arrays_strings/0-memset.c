#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory
 *
 * @s: pointer that point to an address
 * @b: constant
 * @n: byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0; n > 0; i++, n--)
		{
			s[i] = b;
		}

		return (s);
}
