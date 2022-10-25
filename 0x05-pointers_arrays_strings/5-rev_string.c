#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int count = 0, i;
	char str = s[0];

	while (count >= 0)
	{
		if (s[count] == '\0')
			count++;
	}
	
	for (i = 0; i < count; i++)
	{
		count--;
		str = s[i];
		s[i] = s[count];
		s[count] = str;
	}
}
