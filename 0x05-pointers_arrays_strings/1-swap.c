#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
