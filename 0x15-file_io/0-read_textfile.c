#include "main.h"

/**
 * read_textfile - reads a text file and reads it to the
 * posix standard input
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters that could be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wrstatus;
	size_t printed;
	char c;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0);
	if (fd < 0)
		return (0);

	for (printed = 0; printed < letters; printed++)
	{
		c = (read(fd, &c, 1) == 1) ? (unsigned char) c : EOF;
		if (c != EOF)
		{
			wrstatus = write(1, &c, 1);
			if (wrstatus != 1)
				return (0);
		}
		else
			return (printed);
	}
	close(fd);
	return (printed);
}
