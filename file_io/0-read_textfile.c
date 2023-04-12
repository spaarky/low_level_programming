#include "main.h"

/**
 * read_textfile - read certain size and prints to std output
 * @filename: file to read
 * @letters: size to read
 *
 * Return: actual size read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
   	int fileDescriptor;
   	ssize_t nRead, nWrite;
    	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nRead = read(fileDescriptor, buffer, letters);
	if (nRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	nWrite = write(STDOUT_FILENO, buffer, nRead);
	if (nWrite == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	close(fileDescriptor);
	return (nRead);
}
