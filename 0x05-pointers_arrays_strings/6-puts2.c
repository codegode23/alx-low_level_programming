#include "main.h"
/**
 * puts2 - a function that prints every other character of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (str[cnt] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (cnt % 2 == 0)
			_putchar(str[cnt]);
		cnt++;
	}
}
