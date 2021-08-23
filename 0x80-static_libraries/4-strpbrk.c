#include "holberton.h"

/**
 * _strpbrk - find first byte match
 * @s: str
 * @accept: str
 *
 * Return: pointer to first byte match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]))
			return (&s[i]);

		i++;
	}
	return (0);
}
