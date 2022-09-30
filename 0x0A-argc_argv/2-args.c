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
int i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
