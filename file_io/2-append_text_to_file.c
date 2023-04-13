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
 * append_text_to_file -
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, nWrite;

	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(fileDescriptor);
		return (1);
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
