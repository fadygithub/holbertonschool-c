#include "holberton.h"

/**
 * _strncpy - copy
 * @dest: a str
 * @src: a str
 * @n: number
 *
 * Return: str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, lsrc;

	lsrc = _strlen(src);
	if (lsrc >= n)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else
	{
		for (i = 0; i < lsrc; i++)
			dest[i] = src[i];
		for (i = lsrc; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
