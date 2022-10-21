#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: Variable to be checked
 */

int _isupper(int c)
{
	for (c >= 'A' && c<= 'Z')
		printf("%c is uppercase\n", c);
	retun (c);
}
