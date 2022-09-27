#include "main"
/**
 * _strstr -  function that locates a substring
 *
 * @haystack: string to search
 * @needle: string to search for
 *
 * Return: haystck or null
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}
