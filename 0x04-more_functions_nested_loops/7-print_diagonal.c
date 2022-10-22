#include "main.h"
/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l. m;

		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; n++)
			{
				if (m == 1)
					_putchar('\\');
				else 
					if (m < 1)
						_putchar(' ');
			}
			_putchar('\n')
		}
	}
}
