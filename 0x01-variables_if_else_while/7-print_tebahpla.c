#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints all leters of the alphabet in reverse order.
 * Return: 0
 */

int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters = letters - 1;
	}

	putchar('\n');
	return (0);

}
