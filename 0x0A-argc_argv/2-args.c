#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: Prints all arguments it recieves.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of string arguments.
 * Return: 0
 */

int main(const int argc, char const *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

