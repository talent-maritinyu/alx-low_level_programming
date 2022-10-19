#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: print first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}		
