#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the text to be written
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;
	int flags = O_WRONLY | O_APPEND;

	if (filename != NULL)
	{
		fd = open(filename, flags);

		if (fd != -1)
		{
			if (text_content != NULL)
			{
				n = write(fd, text_content, _strlen(text_content));

				if (n == -1)
				{
					close(fd);
					return (-1);
				}
			}

			close(fd);
			return (1);
		}
	}

	close(fd);

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
