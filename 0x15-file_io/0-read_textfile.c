 #include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to stdout.
 *
 * @filename: file to open,read and to write on
 * @letters: actual numbers to print
 *
 * Return: actual number to print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	rd = read(op, buff, letters);
	if (rd < 0)
	{
		free(buff);
		return (0);
	}

	buff[rd] = '\0';
	close(op);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (wr);
}
