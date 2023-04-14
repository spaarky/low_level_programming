#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fileDescriptor: file descriptor
 *
 * Return: 0 on success
 */
int __exit(int error, char *s, int fileDescriptor)
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
		dprintf(STDERR_FILENO, "Error: Can't close fileDescriptor %d\n", fileDescriptor);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fileDescriptor_1), second is file to copy to (fileDescriptor_2)
 *
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fileDescriptor_1, fileDescriptor_2, nRead, nWrite;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fileDescriptor_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileDescriptor_2 == -1)
		__exit(99, argv[2], 0);

	fileDescriptor_1 = open(argv[1], O_RDONLY);
	if (fileDescriptor_1 == -1)
		__exit(98, argv[1], 0);

	while ((nRead = read(fileDescriptor_1, buffer, 1024)) != 0)
	{
		if (nRead == -1)
			__exit(98, argv[1], 0);

		nWrite = write(fileDescriptor_2, buffer, nRead);
		if (nWrite == -1)
			__exit(99, argv[2], 0);
	}

	close(fileDescriptor_2) == -1 ? (__exit(100, NULL, fileDescriptor_2)) : close(fileDescriptor_2);
	close(fileDescriptor_1) == -1 ? (__exit(100, NULL, fileDescriptor_1)) : close(fileDescriptor_1);
	return (0);
}
