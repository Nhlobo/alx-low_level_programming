#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the filename
 * @text_content: the text to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;
	int flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename != NULL)
	{
		fd = open(filename, flags, mode);

		if (fd != -1)
		{
			if (text_content != NULL)
			{
				n = write(fd, text_content, _strlen(text_content));

				if (n == -1)
					return (-1);
			}

			return (1);
		}
	}

	return (-1);
}

/**
 * _strlen - gets the length of a string
 * @str: the string
 * Return: the length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}
