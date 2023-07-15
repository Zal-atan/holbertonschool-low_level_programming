#include "main.h"

/**
 * test_arg_count - Checks if argc == 3
 *
 * @argc: number of arguments passed
 *
*/
void test_arg_count(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
 * test_file_in - Checks if input file is valid
 *
 * @checker: positive int if opens, -1 if not opened
 * @name: name of file
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 *
*/
void test_file_in(ssize_t checker, char *name, int fd_from, int fd_to)
{
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}


/**
 * test_file_out - Checks if output file is valid
 *
 * @checker: positive int if opens, -1 if not opened
 * @name: name of file
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 *
*/
void test_file_out(ssize_t checker, char *name, int fd_from, int fd_to)
{
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * test_close - Checks if fd_close worked correctly
 *
 * @close: input integer from close, -1 if closed incorrectly
 * @fd_closed: file descriptor of closed file
 *
*/
void test_close(int close, int fd_closed)
{
	if (close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_closed);
		exit(100);
	}
}


/**
 * main - copies file_from to file_to
 *
 * @argc: Number of arguments
 *
 * @argv: array of pointers to arguments passed
 *
 * Return: Returns 0 on success
*/

int main(int argc, char **argv)
{
	char *file_from, *file_to;
	ssize_t len_read = 1024, len_write;
	int fd_from = 0, fd_to = 0;
	char buffer[1024];

	test_arg_count(argc);

	file_from = argv[1], file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	test_file_in((ssize_t)fd_from, argv[1], -1, -1);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	test_file_out((ssize_t)fd_to, argv[2], fd_from, -1);

	while (len_read == 1024)
	{
		len_read = read(fd_from, buffer, len_read);
		test_file_in(len_read, argv[1], fd_from, fd_to);
		len_write = write(fd_to, buffer, len_read);
		if (len_read != len_write)
			len_write = -1;
		test_file_out(len_write, argv[2], fd_from, fd_to);
	}

	test_close(close(fd_to), fd_to);
	test_close(close(fd_from), fd_from);

	return (0);
}
