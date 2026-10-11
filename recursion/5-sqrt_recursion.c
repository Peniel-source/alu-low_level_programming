#include "main.h"

/**
 * _sqrt_helper - tries i as the square root of n, then i + 1, and so on
 * @n: number to find the root of
 * @i: current guess
 *
 * Return: natural square root of n, or -1 if there is none
 */
int _sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: natural square root of n, or -1 if there is none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_helper(n, 1));
}
