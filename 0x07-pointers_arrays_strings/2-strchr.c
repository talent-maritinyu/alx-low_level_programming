#include "main.h"

/**
 * _strchr - identify cahr in string
 * @s: string
 * @c: char in strings
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
