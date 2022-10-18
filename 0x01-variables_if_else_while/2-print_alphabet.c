#include <stdio.h>
/**
 * main - Entry point print alphabet in lowercase
 *
 * Return: Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
