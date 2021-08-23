#include "holberton.h"
/**
 * _atoi - cto int
 * @s: the string to convert
 * Return: result
 */
int _atoi(char *s)
{
	short bool;
	int i, moins, res;

	i = moins = res = bool = 0;
	moins = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			moins *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			bool = 1;
		}
		else if (bool == 1)
			break;
		i++;
	}
	res *= moins;
	return (res);
}
