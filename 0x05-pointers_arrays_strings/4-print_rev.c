#include "main.h"
/**
 * print_rev - print a string, in reverse,
 * followed by a new line.
 *
 * @s: input string.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (s[cnt] == '\0')
			break;
		cnt++;
	}

	for (cnt--; cnt >= 0; cnt--)
		_putchar(s[cnt]);
	_putchar('\n');
}
