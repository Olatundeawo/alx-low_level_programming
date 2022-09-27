#include "main"
/**
 * print_chessboard - unction that prints the chessboard.
 *
 * @a: arrays
 *
 * Return: null
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar([i][j]);
		}

		_putchar('\n');
	}
}