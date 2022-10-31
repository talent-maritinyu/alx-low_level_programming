#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory size of starting address
 * @b: bytes required
 * @n: bytes changed
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
