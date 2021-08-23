#include "holberton.h"

/**
 * _memcpy - memory copy
 * @dest: estination buffer
 * @src: source buffer
 * @n: number
 *
 * Return: buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
