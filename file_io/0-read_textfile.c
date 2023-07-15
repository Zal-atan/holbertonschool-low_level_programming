#include "main.h"

/**
 * read_textfile - This function reads a text file
 *
 * @filename: pointer to location of file to read from
 *
 * @letters: number of letters the function should rwad and print
 *
 * Return: Returns number of letter read and printed, or 0 if not equal
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len_read, len_write, openf;
	char *buffer;

	if (filename == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	if (openf == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(openf);
		return (0);
	}

	len_read = read(openf, buffer, letters);
	close(openf);

	if (len_read == -1)
	{
		free(buffer);
		return (0);
	}

	len_write = write(STDOUT_FILENO, buffer, len_read);
	free(buffer);
	if (len_read != len_write)
		return (0);

	return (len_write);
}
