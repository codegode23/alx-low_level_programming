#include "main.h"
/**
 * print_most_numbers - print numbers between 0 to 9
 * 2 and 4 excluded.
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
