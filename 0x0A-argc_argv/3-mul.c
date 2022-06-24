#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Description: Multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: Array of string arguments
 * Return: 0 if two arguments are passed else 1
 */

int main(const int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
