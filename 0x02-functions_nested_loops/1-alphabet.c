#include "main.h"

/**
 * print_alphabet - function prototype
 * Description: Prints all letters of the alphabel in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}

	_putchar('\n');
}
