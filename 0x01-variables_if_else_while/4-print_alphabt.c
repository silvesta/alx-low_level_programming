#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Print all letters of the alphabet except
 * e and q.
 * Return: 0
 */

int main(void)
{	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{	putchar(letters);
			letters = letters + 1;
		}

putchar('\n');
return (0);
	}

}

