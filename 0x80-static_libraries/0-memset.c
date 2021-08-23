#include "holberton.h"

/**
 * _memset - memory set
 * @s: buffer
 * @b: char
 * @n: number
 *
 * Return: buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
