#include <stdio.h>

/**
 * main - Program entry point.
 * Description: Prints its name followed by a new line.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of string arguments.
 * Return: 0
 */

int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

