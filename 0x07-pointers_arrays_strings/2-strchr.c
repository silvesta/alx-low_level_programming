#include "main.h"

/**
 * _strchr - Function prototype
 * Description: Locates a character in a string.
 * @s: Pointer to the string
 * @c: Character to be located.
 * Return: pointer to the first occurrence of the character c in the string s.
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (0);

}

