#include "main.h"

/**
 * _isalpha - Function prototype
 * Description: Determine if a character is a letter or not
 * @c: Test ascii character
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	int check = (c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0;

	return (check);
}
