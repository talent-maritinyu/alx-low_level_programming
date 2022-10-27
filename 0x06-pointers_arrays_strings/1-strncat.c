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
	int m, n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while(j < n && src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
