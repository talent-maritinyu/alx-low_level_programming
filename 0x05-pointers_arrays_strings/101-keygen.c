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
	int count = 0;
	srand(time(NULL));
	char randChar;

	int passwordLength;

	while (count < passwordLength)
	{
		srand(time(NULL);
		randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
		printf("%c", randChar);
		count++;
	
	}
	return (0);	
}
