#include "main.h"

/**
 * _calloc - Alocates memory for an array using the malloc function
 * @nmemb: the amount of memory in bytes to be allocated
 * @size: the size of the integer to be allocated memory for
 *
 *Return: Nothing success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
