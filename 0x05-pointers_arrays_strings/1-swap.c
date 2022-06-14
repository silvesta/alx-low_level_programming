#include "main.h"

/**
 * swap_int - Function prototype
 * Description: Swaps the value of two integers.
 * @a: int pointer
 * @b: b pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

