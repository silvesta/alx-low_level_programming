#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints single digit base ten numbers from zero
 * use of char type not allowed.
 * Return: 0
 */

int main(void)
{
	int base_Ten = 0;

	while (base_Ten < 10)
	{
		putchar(48 + base_Ten);
		base_Ten = base_Ten + 1;
	}

	putchar('\n');
	return (0);

}
