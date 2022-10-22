#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int a, b;

		for (a = 1; a < size; a++)
		{
			for (b = 1; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= i; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
