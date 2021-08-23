#include "holberton.h"

/**
 * _strcpy - cp wrooooong
 * @dest: str
 * @src: chr
 *
 * Return: pointer to char
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] == dest[i])
			return (&dest[i]);
		i++;
	}
	return (0);
}
