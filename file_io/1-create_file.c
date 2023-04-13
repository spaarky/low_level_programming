#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

/**
 * create_file - creates a file with the rw------- permissions and writes in
 * if the file already exists, do not change the permissions
 * @filename: name to give to the new file]
 * @text_content: content to give to file
 *
 * Return: 1 on success, -1 for error
*/

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, nWrite;

	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(fileDescriptor);
		return (-1);
	}

	nWrite = write(fileDescriptor, text_content, _strlen(text_content));
	if (nWrite == -1 || nWrite != _strlen(text_content))
	{
		close(fileDescriptor);
		return (-1);
	}

	close(fileDescriptor);
	return (1);
}
