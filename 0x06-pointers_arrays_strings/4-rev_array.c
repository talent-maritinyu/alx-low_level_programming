#include "main.h"

/**
 * reverse_array - print rev array
 * @a: array
 * @n: number of elements
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
