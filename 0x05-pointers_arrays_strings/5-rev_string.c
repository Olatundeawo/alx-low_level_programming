#include "main.h"
/**
 * rev_string - a function that prints a string, in reversed.
 *
 * @s: pointer argument.
 */

	void rev_string(char *s)
{
	int i,j, len = 0;
	char rev[];

	while (*s[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len; i++;)
	{
	rev[i] = *s[j];
	j--;
	}
	_putchar(rev);
	_putchar('\n');
}
