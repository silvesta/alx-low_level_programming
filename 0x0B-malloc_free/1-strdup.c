#include "main.h"
#include <stdlib>

/**
 * _strdup - Function prototype
 * Description: Returns a pointer to newly allocated space in memory.
 * @str: The string to be copied.
 * Return: Pointer to newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *str_out;
	int a;
	int b;

	if (str == 0)
		return (0);

	for (a = 0; str[a] != '\0'; a++)
	{
	}

	str_out = (char *)malloc(sizeof(char) * (a + 1));

	if (str_out == 0)
		return (0);

	for (b = 0; b <= b; b++)
		str_out[b] = str[b];

	return (str_out);

}
