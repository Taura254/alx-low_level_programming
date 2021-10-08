#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: pointer to the location of the string
 *
 * Return: The length of th string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
