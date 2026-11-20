#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message to standard error and exits
 * @code: the exit code
 * @action: what could not be done
 * @name: the name of the file involved
 */
void error_exit(int code, char *action, char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't %s %s\n", action, name);
	exit(code);
}

/**
 * check_close - closes a file descriptor and exits with 100 if it fails
 * @fd: the file descriptor to close
 */
void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies the content of one file descriptor to another
 * @fd_from: the file descriptor to read from
 * @fd_to: the file descriptor to write to
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 */
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t nread;
	ssize_t nwritten;

	nread = read(fd_from, buffer, BUFFER_SIZE);
	while (nread > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten != nread)
			error_exit(99, "write to", file_to);
		nread = read(fd_from, buffer, BUFFER_SIZE);
	}
	if (nread == -1)
		error_exit(98, "read from file", file_from);
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments: file_from and file_to
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "read from file", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "write to", argv[2]);
	copy_file(fd_from, fd_to, argv[1], argv[2]);
	check_close(fd_from);
	check_close(fd_to);
	return (0);
}
