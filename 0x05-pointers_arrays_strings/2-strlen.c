#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(i + s) != 0)
	{
		i++;
	}
	return (i);
}
