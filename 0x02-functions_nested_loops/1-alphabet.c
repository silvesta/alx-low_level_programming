#include "main.h"

/**
 * main - Entry point for the program
 * Description: Program prints all letters of the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char letters = 'a';

	while ('a' <= 'z')
	{
		_putchar(letters);
		letters++;
	}

	_putchar('\n');
}
