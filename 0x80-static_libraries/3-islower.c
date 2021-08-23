#include "holberton.h"

/**
 * _islower - is lower?
 *@c: a char
 *
 * Return: 1 if c is lower
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
