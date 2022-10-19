#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number passed print from n
 * Return: Always
 */
void print_to_98(int n)
{
	int i, j;

	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	while (n >= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
		printf("\n");
	}
}
