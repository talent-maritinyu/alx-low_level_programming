#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: Always
 */
void print_to_98(int n)
{
	int i, j;

	for (i = n; i <= 98; i++)
		if (i !=98)
			_putchar(',');
	_putchar(' ');
	_putchar('\n');

	for (j = n; j> 98; j--)
		if (j !=98)
			_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
