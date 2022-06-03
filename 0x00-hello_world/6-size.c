#include <stdio.h>
/**
 *  main - initial entry point for the program
 *  Return: 0
 */
int main(void)
{
	char characters;
	int intergers;
	long int long_intergers;
	long long int double_long_intergers;
	float float_type;

	printf("Size of a char: %zu bytes(s)\n", sizeof(characters));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intergers));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long_intergers));
	printf("Size of a long long int: %zu bytes(s)\n",
	sizeof(double_long_intergers));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float_type);
	return (0);
}


