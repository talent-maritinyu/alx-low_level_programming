#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Creat a function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Success
 */
void print_alphabet(void)
{
	char c;

	c = 'a';


	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
