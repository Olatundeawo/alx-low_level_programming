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
			for (j = 0; needle[j] > '\0'; j++)
			{
				if (haystack[i + j] != needle[i])
				{
					break;
				}
				if else(needle[b] == '\0')
				{
					return (haystack[i]);
				}
			}
		}
		return ('\0');
}
