#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the location of the string
 * @accept: Letters to the sting
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	int cont = 0;
	int temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp = cont;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont = cont + 1;
			}
		}
		if (cont == temp)
		{
			return (cont);
		}
	}
	return (cont);
}
