#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: int
 *
 * Return: null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n, i;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];

	s[len] = '\0';

	return (s);

}
