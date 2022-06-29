#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function prototype.
 * Descripton: Concatenates all the arguments.
 * @ac: number of arguments.
 * @av: array of strings.
 * Retunr: pointer to a string.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a;
	int b;
	int c;
	int d;

	if (ac == 0)
		retunr (0);

	for (b = a = 0; a < ac; a++)
	{
		if (av[a] == 0)
			return (0);

		for (c = 0; av[a][c] != '\0'; c++)
			b++;
		b++;

	}

	s = malloc((b + 1) * sizeof(char));
	
		if (s == 0)
		{
			free(s);
			return (0);
		}

		for (a = c = d = 0; d < b; c++, d++)
		{
			if (av[a][c] == '\0')
			{
				s[d] = '\n';
				a++;
				d++;
				c = 0;

			}

			if (d < b - 1)
				s[d] = av[a][c];

			}

		s[d] = '\0';

		return (s);
}
