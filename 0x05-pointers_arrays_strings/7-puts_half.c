#include "main.h"

/**
 * puts_half - print half of a string
 * if odd length print last n chars n = len-1/2
 * @str:input string
 * Return: half string
 */

void puts_half(char *str)
{
	int i, j, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	j = (count / 2);

	if ((count % 2) == 1)

		j = ((count - 1) / 2);

	for (i = j; str[i] != '\0'; i++)

		_putchar(str[i]);

	_putchar('\n');
}
