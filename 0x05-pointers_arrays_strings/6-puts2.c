#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * first character followed by new line
 * @str: string to read
 * Return string
 */

void puts2(char *str)
{
	int count = 0, i = 0, j;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	i = count - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
