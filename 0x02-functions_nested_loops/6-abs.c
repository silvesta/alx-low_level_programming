#include "main.h"

/**
 * _abs - Function prototype
 * Description: Calculate the absolute value of a given number
 * @n: Number used to find absolute value
 * Return: Absolute value of the number
 */

int _abs(int n)
{
	int a = n >= 0 ? n : n * -1;

	return (a);
}
