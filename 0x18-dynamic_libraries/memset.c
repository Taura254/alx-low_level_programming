#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to char
 * @b: First character
 * @n: Unsigned integer
 *
 * Return: A Character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
