#include "holberton.h"

/**
 * _strchr - look for chr
 * @s: str
 * @c: chr
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
