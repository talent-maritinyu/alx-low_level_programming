#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: copy from
 * @src: copy to
 * Retrun: concatenated
 */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while(src[n] != '\0')
	{
		dest[m] = src[j];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
