#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: swaps values with int b in the main code
 * @b: swaps values with int a in the main code
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
