#include "main.h"

/**
 * _strcat - concatenate two strings
 * using at most n bytes from src
 * @dest: input string
 * @src: input string
 * @n: input 
 * Retrun: destination
 */

char *_strcat(char *dest, char *src, int n)
{
	int m, k;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	k = 0;
	while(k < n && src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
