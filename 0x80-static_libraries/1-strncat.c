#include "holberton.h"

/**
 * _strncat - concatenate
 * @dest: a str
 * @src: a str
 * @n: number
 *
 * Return: str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l, lsrc;

	lsrc = _strlen(src);
	l = _strlen(dest);
	lsrc = (lsrc >= n) ? n : lsrc;
	for (i = 0; i < lsrc; i++)
		dest[l + i] = src[i];
	dest[_strlen(dest)] = '\0';
	return (dest);
}
