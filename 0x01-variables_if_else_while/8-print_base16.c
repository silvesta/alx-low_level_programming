#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints base 16 numbers.
 * Return: 0
 */

int main(void)
{
	int base_16 = 0;

	while (base_16 < 16)
	{
		putchar(base_16);
		base_16 = base_16 + 1;
	}

	putchar('\n');
	return (0);

}
