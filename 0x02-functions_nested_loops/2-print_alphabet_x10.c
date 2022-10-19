#include "main.h"
/**
 * print_alphabet_x10 - print ten times the alphabet in small letters
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i <= 9)

		c = 'a';
	while (c <= 'z')
		_putchar(c);
	c++;
	_putchar('\n');
	i++;
}
