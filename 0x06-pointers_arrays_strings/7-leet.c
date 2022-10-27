#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: Always 0
 */
char *leet(char *n)
{
	int a, b;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == find[b])
			{
				n[a] = replace[b / 2];
				b = 9;
			}
		}
	}
	return (n);
}
