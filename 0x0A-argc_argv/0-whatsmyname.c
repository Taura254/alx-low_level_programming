#include <stdio.h>

/**
 * main - Prinths the program namefollowed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: An array to the pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	n = argc - 1;
	printf("%s\n", argv[n]);
	return (0);
}
