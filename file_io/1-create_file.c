#include "main.h"

/**
 * create_file - This function creates a text file
 *
 * @filename: pointer to location of file to read from
 *
 * @text_content: Text to write into file
 *
 * Return: Returns 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t len_write, openf;

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (openf == -1)
		return (-1);

	if (text_content)
	{
		if (write(openf, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(openf);

	return (1);
}
