#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string location
 * @c: The chatacter to be located
 *
 * Return: Null if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x;
	int y;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		if (s[y] == c)
		{
			return (s + y);
		}
		else if (s[y] == '\0')
		{
			s = '\0';
		}
	}
	return (s);
}
