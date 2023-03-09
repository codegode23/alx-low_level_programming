#include "main.h"
/**
 * _sqrt - returns the natural square root of anumber.
 * @num: given number.
 * @sqt: square root.
 *
 * Return: -1 when number has no natural square root,
 * else, natural square root
 */
int _sqrt(int num, int sqt)
{
	if ((sqt * sqt) == num)
		return (sqt);

	if (sqt == num / 2)
		return (-1);

	return (_sqrt(num, sqt + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: -1 when number has no natural square root,
 * else, natural square root
 */
int _sqrt_recursion(int n)
{
	int sqt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, sqt));
}
