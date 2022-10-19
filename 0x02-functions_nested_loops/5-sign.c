#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: number input
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 *
 */
int print_sign(int n)
{
	int num;

	num = 0;

	if (n > num)
	{
		_putchar('+');
	return (1);
	}
	else if (n == num)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
