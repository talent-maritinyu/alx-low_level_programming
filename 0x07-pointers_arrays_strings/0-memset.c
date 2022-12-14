#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory size of starting address
 * @b: bytes required
 * @n: bytes changed
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
