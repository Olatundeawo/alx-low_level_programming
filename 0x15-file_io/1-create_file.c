#include "main.h"
/**
 * create_file - function that create a file
 *
 * @filename: file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success -1 on filure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR |O_TRUNC, 0600);
	if (op < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wr = write(op, text_content, i);
		if (wr != i)
			return (-1);
	}
	close(op);
	return (1);
}
