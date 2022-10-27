#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: copies to
 * @src: copies from
 * @n: input
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
			dest[a] = src[a];
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
