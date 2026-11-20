#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nread;
	ssize_t nwritten;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buffer, letters);
	close(fd);
	if (nread == -1)
	{
		free(buffer);
		return (0);
	}
	nwritten = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	if (nwritten != nread)
		return (0);
	return (nread);
}
