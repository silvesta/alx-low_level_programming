#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints all base 16 numbers.
 * Return: 0
 */

int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}

	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}

	putchar('\n');
	return (0);

}
