#include <stdio.h>

/**
 * main - Entry point for program
 * Description: Prints letters of the alphabet in lower case and
 * uppercase
 * Return: 0
 */

int main(void)
{	char low_alph = 'a';
	char upper_alph = 'A';

	while (low_alph <= 'z')
	{	putchar(low_alph);
		low_alph = low_alp + 1;
	}

	while (upper_alph <= 'Z')
	{	putchar(uppper_alph);
		upper_alph = upper_alph + 1;
	}

	putchar('\n');
	return (0);

}
