#include "main.h"

/**
 * append_text_to_file - This function adds text to the end of an existing file
 *
 * @filename: pointer to location of file to read from
 *
 * @text_content: Text to write into file
 *
 * Return: Returns 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int openf;

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
		return (-1);

	if (!text_content)
	{
		text_content = '\0';
	}

	write(openf, text_content, strlen(text_content));
	close(openf);

	return (1);
}
