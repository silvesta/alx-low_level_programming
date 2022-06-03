#include <stdio>

/**
 * main - Entry point for the program
 * Description: Print letters of the alphabet except
 * e and q
 * Return: 0
 */

int main(void)
{	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
			putchar(l);
		l = l + 1;
	}

	putchar('\n');
	return (0);

}
