#include "main.h"
/**
 * read_textfile - reads texts and prints it
 *
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fh;
	ssize_t rd, wr;
	char *fa;

	if (filename)
		return (1);
	else
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);

	fa = malloc(sizeof(char) * (letters));

	if (fa == NULL)
		return (0);
	rd = read(fh, fa, letters);
	wr = write(STDOUT_FILENO, fa, rd);
	free(fa);
	close(fh);

	return (wr);
}
