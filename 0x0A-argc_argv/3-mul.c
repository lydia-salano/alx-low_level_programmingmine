#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: size of argv.
 * @argv: a pointer to an array containing the program line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
