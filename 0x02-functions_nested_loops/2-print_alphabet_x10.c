#include "main.h"

/**
 * print_alphabet_x10 - Function prototype
 * Description: Prints all letters of the alphabet 10 times in lowercase.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letters = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}

		letters = 'a';

		_putchar('\n');
	}
}

