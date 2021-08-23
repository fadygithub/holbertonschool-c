#include "holberton.h"

/**
 * _strstr - find first string match
 * @haystack: str
 * @needle: str
 *
 * Return: pointer to first string match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] != '\0')
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
				else
					j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
