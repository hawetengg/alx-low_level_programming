#include "main.h"

/**
 * create_file - program that creates a file
 * @filename: filename
 * @text_content: content wrote int the file
 * Return: 1(success) -1(fail)
 */

int create_file(const char *filename, char *text_content)
{
	int file, result = 1, countn = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[countn])
			countn++;
		result = write(file, text_content, countn);
	}
	if (result == -1)
		return (-1);
	close(file);
	return (1);
}
