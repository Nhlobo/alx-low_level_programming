#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: number of letters to be read from the file
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *text;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd != -1)
	{
		text = malloc(sizeof(char) * letters);

		if (text != NULL)
		{
			n = read(fd, text, letters);

			if (n != -1)
			{
				n = write(STDOUT_FILENO, text, n);

				if (n != -1)
				{
					close(fd);
					return (n);
				}
			}
		}
	}

	close(fd);

	return (0);
}
