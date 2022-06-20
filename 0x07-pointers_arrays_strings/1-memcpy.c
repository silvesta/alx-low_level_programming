#include "main.h"

/**
 * _memcpy - Function prototype
 * Description: The _memcpy() function copies n bytes from memory area src
 * to memory area dest.
 * @dest: Pointer to the array
 * @src: Pointer to the source array
 * @n: The number of bytes to copy.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);

}
