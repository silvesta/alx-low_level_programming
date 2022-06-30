#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function prototype
 * @b: Amount of bytes.
 * Return: Pointer to he alocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);

}
