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
	int i, j, byte = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				byte++;
				break;
			}
		}

		if else(accept[j] == '\0')

			break;
	}

	return (byte);

}
