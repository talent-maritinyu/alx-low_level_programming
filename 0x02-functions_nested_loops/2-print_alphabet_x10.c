#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Creat a function that prints the alphabet,
 * 10 times in lowercase, followed by a new line
 *
 * Return: Success
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i <= 9)

		c = 'a';
	       while (c <= 'z')
			_putchar(c);
	c++;

	_putchar('\n');
	i++;
}
