#include "main.h"

/**
 * _memset - Function prototype.
 * Description: Fills memory with a constant byte.
 * @s: Pointer to the memory.
 * @b: Character.
 * @n: The number of bytes to fill.
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);

}
