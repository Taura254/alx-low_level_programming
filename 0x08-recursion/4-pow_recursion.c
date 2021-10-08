#include "main.h"

/**
 * _pow_recursion - Calculaes the value of x raised to y
 * @x: The value of the first number
 * @y: The value raised to x
 *
 *Return: the calculated value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
