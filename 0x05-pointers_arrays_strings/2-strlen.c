#include "main.h"
/**
 * _strlen - a function to check for length of string.
 *
 *@s: a pointer character.
 *
 * Return: count.
 */

	int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
