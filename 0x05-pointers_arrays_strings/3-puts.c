#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line,
 * to stdout
 * @str: input string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (str[cnt] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[cnt]);
		cnt++;
	}
}
