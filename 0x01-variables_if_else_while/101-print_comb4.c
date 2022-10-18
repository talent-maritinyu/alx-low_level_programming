#include <stdio.h>
/**
 * main - Entry point.
 * Description: display triple digits 
 *
 * Return: Success
 */
int main(void)
{
	int num;
	num = 0;
	while (num <= 789)
		num / 100;
		(num / 100) % 10;
		num % 100;
		if ((num / 100) < ((num / 10) % 10) && ((num / 10) % 10) < (num % 100))
			putchar((num % 100) + '0');
			putchar((num / 10) + '0');
			putchar(( num / 100) + '0');
			if (i < 789)
				 putchar(',');
				putchar(' ');
				num++;
				putchar('\n');

				return (0);
}
