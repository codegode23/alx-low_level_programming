#include "main.h"
/**
 * prime_num - Check to see if number is divisible.
 * @num: The number beign checked.
 * @d: number dividing.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int prime_num(int num, int d)
{
	if (num % d == 0)
	{
		return (0);
	}
	if (d == num / 2)
	{
		return (1);
	}
	return (prime_num(num, d + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number beign checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (prime_num(n, d));
}
