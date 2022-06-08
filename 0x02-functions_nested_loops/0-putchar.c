#include "main.h"

/**
 * main - Entry point for the program
 * Description: Program prints the string _putchar
 * Return: 0
 */

int main(void)
{
	char a[9] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}

	_putchar('\n');

	return (0);
}
