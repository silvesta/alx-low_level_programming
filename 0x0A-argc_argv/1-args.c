#include <stdio.h>

/**
 * main - program entry point.
 * Description: Prints the number of arguments passed into it.
 * @argc: Number of arguments passed into the program.
 * @argv: Array of string arguments.
 * Return: 0
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

