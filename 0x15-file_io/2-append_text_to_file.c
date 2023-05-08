#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name
 * @text_content: text to be added
 *
 * Return: 1 and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh;
	int wr;
	int n;

	if (!filename)
		return (-1);
	fh = open(filename, O_WRONLY | O_APPEND);
	if (fh == -1)
		return (-1);
	if (text_content)
	{
		n = strlen(text_content);
		wr = write(fh, text_content, n);
		if (wr == -1)
		{
			close(fh);
			return (-1);
		}
	}
	close(fh);
	return (1);
}
