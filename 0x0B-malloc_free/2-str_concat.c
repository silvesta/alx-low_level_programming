#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function prototype
 * Descruption:Concatenates two strings
 * @s1: string 1
 * @s2: The second string to be concatenated ith s1.
 * Return: Pointer to newly allocated memory.
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	char *p;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";

	for (b = 0; s1[b] != '\0'; b++)
	{
	}

	for (c = 0; s2[c] != '\0'; c++)
	{
	}

	p = malloc((b + c) * sizeof(char) + 1);

	if (p == 0)
		return (0);

	for (a = 0; a <= b + c; a++)
	{
		if (a < b)
			p[a] = s1[a];

		else
			p[a] = s2[a - b];

	}

	p[a] = '\0';

	return (p);

}


