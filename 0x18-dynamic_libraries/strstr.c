#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The mainstring to be searched
 * @needle: The substring being searched in the mainstring
 *
 * Return: Pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
