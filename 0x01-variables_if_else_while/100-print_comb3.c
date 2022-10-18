#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Success
 */
int main(void)
{
	int num;
	for (num = 0; num < 90; num++)
		for ()
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
	if (num != 89)		
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
