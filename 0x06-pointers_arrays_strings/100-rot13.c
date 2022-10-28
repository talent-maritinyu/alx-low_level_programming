#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: parameters
 * Returns: pointer s
 */

char *rot13(char *s)
{
	int i, j;

	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d1[j])
			{
				s[i] =drot13[j];
				break;
			}
		}
	}
	return (s);
}
		
