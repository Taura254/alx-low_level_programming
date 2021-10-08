#include "main.h"

/**
 * _sqrt_recursion - Prints the square root of a number
 * @n: The number to be calculated the square root for
 * @c: The test case
 *
 * Return: the square root as natural numbers
 */
int _sqrtcheck(int n, int c);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (_sqrtcheck(n, 1));
	return (0);
}

/**
 * _sqrtcheck - Calculates the square root
 * @n: The number we are calculating the square root for
 * @c: The tester
 *
 * Return: The results of the operation
 */
int _sqrtcheck(int n, int c)
{
	if (n == c * c)
		return (c);
	if (c >= (n / 2))
		return (-1);
	return (_sqrtcheck(n, c + 1));
}
