#include "main.h"
/**
 * print_line - print a straight line n times.
 * @n: number of times a straight line is printed.
 * Return: Always 0 (Success).
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
