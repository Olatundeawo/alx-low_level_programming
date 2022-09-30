#include "main.h"
/**
 * main - function that adds positive numbers
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0 or 1;
 */

int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
