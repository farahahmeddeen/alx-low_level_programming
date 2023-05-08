#include "main.h"
#include <errno.h>
#include <stdio.h>
#define BUF 1024
void error(int file_from, int file_to, char *argv[]);
void copy(int file_from, int file_to, char *argv[]);
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argunebt vector
 *
 * Return: o always
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR |
			S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);
	error(file_from, file_to, argv);
	copy(file_from, file_to, argv);
	return (0);
}
/**
 * error - function to check error
 *
 * @file_from: file to check error
 * @file_to: file to check error
 * @argv: argument vector
 *
 * Return: void
 */
void error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * copy - function to copy
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @argv: argument vector
 *
 * Return: void
 */
void copy(int file_from, int file_to, char *argv[])
{
	ssize_t r;
	ssize_t w;
	char buffer[BUF];

	while ((r = read(file_from, buffer, BUF)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
