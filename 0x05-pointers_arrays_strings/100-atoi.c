#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: convrted string int
 */

int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	if (s[i] == '-')
		++d;
	if (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (d % 2)
			digit = -digit;
		n n * 10 + digit;
		f = 1;
		if (s[i + 1] < '0' || s[1 + 1] > '9')
			break;
		f = 0;
	}
	i++;

	if (f == 0)
		return (0);
	return (n);
}
