#include "main.h"
/**
 * append_text_to_file -  function to add text to the end of a file
 *
 * @filename: file to add to
 * @text_content: string to a to file
 *
 * Return: 1 on success -1 on filure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
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
