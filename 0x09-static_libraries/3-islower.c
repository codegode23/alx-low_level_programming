# include "main.h"
/**
 * _islower - will help check for lowercase character.
 * @c: The character in ASCII code
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
	_putchar('\n');
}
