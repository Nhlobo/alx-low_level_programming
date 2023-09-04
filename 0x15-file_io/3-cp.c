#include "main.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successfull
 */
int main(int argc, char *argv[])
{
	int src, dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);

	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 00664);

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cpy(src, dest, argv[1], argv[2]);

	close_fd(dest);
	close_fd(src);

	return (0);
}

/**
 * close_fd - closes a file decriptor
 * @fd: the file descriptor
 * Return: void
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * cpy - copies the content of a file to another
 * @src: the source
 * @dest: the destination
 * @src_name: name of source file
 * @dest_name: name of destination file
 * Return: void
 */
void cpy(int src, int dest, char *src_name, char *dest_name)
{
	int count;
	char buffer[1024];

	while (1)
	{
		count = read(src, buffer, 1024);

		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_name);
			exit(98);
		}

		count = write(dest, buffer, count);

		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_name);
			exit(99);
		}

		if (count < 1024)
			break;
	}
}
