#include "main.h"
/**
 * _isalpha - a function that checks for lowercase character
 *
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{

	if ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
return (0);
}
