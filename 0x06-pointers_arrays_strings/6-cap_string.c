#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: string to capitalize  
 * Return: capitalised string
 */

char *cap_string(char *)
{
	int i, j;
	int cap = 32;
	int separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}
		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == separators[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
