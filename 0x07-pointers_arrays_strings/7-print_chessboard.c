#include "main.h"

/**
 * print_chessboard - Prints chessboard
 * @a: the array name
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row <= 7; row++)
	{
		for (col = 0; col <= 7; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
