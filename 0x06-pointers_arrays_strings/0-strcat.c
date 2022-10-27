#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: copy from
 * @src: copy to
 */

char *_strcat(char *dest, char *src);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] !='\0'; j++)
		{
			dest[i + j] = src[j];
			if (src[j] == '\0')
				i = j;
		}

	return (dest);
}
