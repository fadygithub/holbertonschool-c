#include "holberton.h"

/**
 * _strlen - str len
 * @s: a pointer
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
