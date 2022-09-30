#include "main.h"
/**
 * main - function that prints all arguments it receives
 *
 * @argc: int
 * @argv: character array
 *
 * Return: null
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++;)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
