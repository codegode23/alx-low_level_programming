#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Returns 1 if is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
	_putchar('\n');
}
