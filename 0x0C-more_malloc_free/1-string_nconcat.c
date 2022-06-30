#include "main.h"
#include <stdlib>

/**
 * string_nconcat - Function prototype
 * Description: Concatenates two strings
 * @s1: First string.
 * @s2: Second string.
 * @n: Amount of bytes.
 * Return:Pointer to the allocated memory, if the functionate fails - NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = n,  index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		a++;

	c =  malloc(sizeof(char) * (a + 1));

	if (c == NULL)
		return (NULL);

	a = 0;

	for (index = 0; s1[index]; index++)
		c[a++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		c[a++] = s2[index];

	c[a] = '\0';

	return (c);
}
