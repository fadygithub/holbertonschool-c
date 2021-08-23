#include "holberton.h"

/**
 * _strcmp - compare
 * @s1: a str
 * @s2: a str
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	do {
		res = s1[i] - s2[i];
		i++;
	} while (s1[i - 1] != '\0' && s2[i - 1] != '\0' && res == 0);
	return (res);
}
