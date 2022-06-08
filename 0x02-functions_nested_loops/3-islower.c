#include "main.h"

/**
 * _islower - Function prototype
 * Description: Check if characters are in lowercase
 * @c: The ascii character to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	int check = c >= 97 && c <= 122 ? 1 : 0;

	return (check);
}
