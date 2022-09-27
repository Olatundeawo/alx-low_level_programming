#include "main.h"
#include <stdio.h>
/**
 * _strspn - unction that gets the length of a prefix substring.
 *
 * @s: character to search
 * @accept: prefix to march
 *
 * Return: numbers of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
