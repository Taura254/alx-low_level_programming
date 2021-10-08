#include "main.h"

/**
 * malloc_checked - Allocates memory using the maloc function
 * @b: The variable to allocated memory for
 *
 * Return: Nothing on success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
