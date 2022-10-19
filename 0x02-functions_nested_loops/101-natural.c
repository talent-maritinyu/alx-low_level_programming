#include <stdio.h>
#include "main.h"
/**
 * main - Entry point  print sum of  
 * multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			s = s + i;
	}
	printf("%d\n", s);
	return (0);
}
