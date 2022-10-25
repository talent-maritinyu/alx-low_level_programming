#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: int variable to swap with b
 * @b: int variable to swap with a
 * Return: Always 0
 */

void swap_int(int *a, int *b);
{
	int i = *a;

	*a = *b;
	*b = i;
}
