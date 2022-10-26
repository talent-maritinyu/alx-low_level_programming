#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords 
 * for the program 101-crackme.
 * Return: Always 0
 */

int main(void) 
{
	int count = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (count < 2772)
		break;
	i = rand() % 128;
	if ((count + i) > 2772)
		break;
	count = count + i;
	printf("%c", i);

	printf("%c\n", (2772 - count));
	return (0);
}
