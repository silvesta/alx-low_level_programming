#include "main.h"

/**
 * _strspn - Function prototype
 * Description: Get the length of a prefix substring.
 * @s: Pointer.
 * @accept: characters to match in the string s
 * Return: The number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0;; a++)
	{
		for b = 0; accept[b] > '\0'; b++)
		{
			if (s[a] != accept[b])
				continue;
			c++;
			break;
		}

		if (accept[b] == '\0')
			break;
	}

	return (c);

}

