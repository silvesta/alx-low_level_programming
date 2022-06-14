#include "main.h"

/**
 * _puts - Function prototype
 * Description: prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Retunr: void
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}

	_putchar('\n');
}

