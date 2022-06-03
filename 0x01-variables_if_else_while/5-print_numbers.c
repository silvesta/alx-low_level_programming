#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Print all single digit base ten numbers
 * Return: 0
 */

int main(void)
{	char base_Ten;

	for (base_Ten = '0'; base_Ten <= '9'; base_Ten++)
	{	putchar(base_Ten);
	}

	putchar('\n');
	return (0);

}
