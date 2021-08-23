#include "holberton.h"

/**
 * _strspn - find bytes
 * @s: str
 * @accept: str
 *
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, l = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]))
			l++;
		else
			break;
		i++;
	}
	return (l);
}
