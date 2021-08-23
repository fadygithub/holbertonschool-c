#include "holberton.h"

/**
 * _puts - str len
 * @str: a str
 *
 * void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
