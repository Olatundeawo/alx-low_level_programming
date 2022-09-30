#include "main.h"
/**
 * main - function that multiplies two numbers.
 *
 * @argc: int
 * @argv: character array
 *
 * Return: null
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
