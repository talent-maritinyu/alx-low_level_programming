#include "main.h"
/**
 * int _abs - computes the absolute value of an integer
 *@r: the integer to check
 * Return: Absolute value r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
	}
	_putchar("%d ", r);

	 return (r);
}       
