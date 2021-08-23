#include "holberton.h"

/**
 * _isalpha - is alpha?
 *@c: a char
 *
 * Return: 1 if c is lower
 */
int _isalpha(int c)
{
	return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}
