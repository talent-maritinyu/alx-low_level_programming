#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * %3,5 and both print Fizz, Buzz and FizzBuzz
 * Return: Always o
 */

int main(void)
{
	int i;

	for  (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fuzz ");
		}
		else 
			if (i % 3 != 0 && i % 5 == 0)
			{
				printf(" Buzz ");
			}
			else 
				if (i % 3 == 0 && i % 5 == 0)
				{
					printf(" FizzBuzz ");
				}
				else
					if (i % 3 != 0 && i % 5 != 0)
					{
						printf("%d", i);
					}
	}
	printf("\n");
	return (0);
}
