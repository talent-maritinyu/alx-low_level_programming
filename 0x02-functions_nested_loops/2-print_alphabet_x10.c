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

	c = 'a';
	i = 0;


	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	while (i <= 9)

	_putchar('\n');
	i++;
}
