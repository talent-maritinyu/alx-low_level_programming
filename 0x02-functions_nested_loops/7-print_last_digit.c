#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @l: last degit result
 * Return: the value of the last digit
 */
int print_last_digit(int l)
{
	int n;

	if (l < 0)
		l = -l;
	n = (l % 10);

	if (n < 0)
		n = -n;
	_putchar(n + '0');

	return (n);
}


