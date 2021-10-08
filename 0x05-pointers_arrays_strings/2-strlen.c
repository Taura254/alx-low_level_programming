#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Accesses the string
 *
 * Return: An integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}

	return (i);
}
