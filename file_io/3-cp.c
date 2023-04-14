#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fileDescriptor: file descriptor
 *
 * Return: 0 on success
 */
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from fd1, second is file to copy to fd2
 *
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, nRead, nWrite;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		__exit(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		__exit(98, argv[1], 0);

	while ((nRead = read(fd1, buffer, 1024)) != 0)
	{
		if (nRead == -1)
			__exit(98, argv[1], 0);

		nWrite = write(fd2, buffer, nRead);
		if (nWrite == -1)
			__exit(99, argv[2], 0);
	}

	close(fd2) == -1 ? (__exit(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (__exit(100, NULL, fd1)) : close(fd1);
	return (0);
}
