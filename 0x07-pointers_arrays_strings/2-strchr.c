#include "main.h"
/**
 * _strchr -  function that locates a character in a string
 *
 * @s: pointer
 * @c: character to search for
 *
 * Return: a pointer to s if c found or null if not found
 */

char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; s[len] >= '\0'; len++)
	{
		if (s[len] == c)

			return (s + len);
	}

	return ('\0');
}
