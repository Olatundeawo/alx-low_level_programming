#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: a pointer that point to a pointer
 * @to: character
 *
 * Return: null
 */

void set_string(char **s, char *to)
{
	*s = to;
}
