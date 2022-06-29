#include <stlib.h>
#include "main.h"

/**
 * *create_array - Function prototype
 * Description: Creates an array of chars
 * @size: Size of the array
 * @c: Character to fill the array with.
 * Retunr: Pointer to an array of char.
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
