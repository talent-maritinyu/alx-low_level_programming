#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * first character followed by new line
 * @str: string to read
 * Return string
 */

void puts2(char *str)
{
	int count;

	while (count >= 0)
	{
		if (str[count] =='\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
