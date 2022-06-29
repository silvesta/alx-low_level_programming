#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function protype.
 * Description: creates an array of chars.
 * @size: size of the array.
 * @c: character to fill the array with.
 * Return: pointer to an array of char.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (0);

	arr = malloc(size);

	if (arr == 0)
		return (0);

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);

}
