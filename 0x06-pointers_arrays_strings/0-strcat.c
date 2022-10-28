#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: input string
 * @src: input string
 * Retrun: concatenated
 */

char *_strcat(char *dest, char *src)
{
	int m, k;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	k = 0;
	while(src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
