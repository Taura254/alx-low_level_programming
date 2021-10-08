#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: ascii code for the  integer to check
 *
 * Return: digit.
 */
int _isdigit(int c)
{
	int digit;

	if (c >= 48 && c <= 57)
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
