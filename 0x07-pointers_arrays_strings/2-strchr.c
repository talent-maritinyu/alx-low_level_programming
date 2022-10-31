#include "main.h"

/**
 * _strchr - identify cahr in string
 * @s: string
 * @c: char in string s
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		while (s[i] == c)
			return *(s + i);
	}
	return (NULL);
}
