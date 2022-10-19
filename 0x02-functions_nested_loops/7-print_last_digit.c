#include "main.h"
/**
 * print_last_digit - prints the last digit of a number 
 * @l: int to scan last degit    
 * Return: the value of the last digit 
 */
int print_last_digit(int l)
{
	int n;   

	n = (l % 10);
	if (n < 0)
		_putchar(-1 * n);
	else 
		_putchar(n + '0');
	return (n);
}


