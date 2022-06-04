#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints all combination of single digit numbers
 * Return: 0
 */

int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		putchar(48 + numbers);

		if (numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}

		numbers++;
	}

	putchar('\n');
	return (0);

}
