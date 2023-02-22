#include "main.h"
/**
 * times_table - Prints the 9 times table
 * starting with 0
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int num1, num2, operation;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			operation = num1 * num2;
			_putchar(44);
			_putchar(32);
			if (operation <= 9)
			{
				_putchar(32);
				_putchar(operation + 48);
			}
			else
			{
				_putchar((operation / 10) + 48);
				_putchar((operation % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
