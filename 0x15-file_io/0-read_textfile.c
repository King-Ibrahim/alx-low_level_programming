#include <stdio.h>
#include <stdlib.h9>
#include "main.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output
 * @filename: the pointer to the file
 * @letters: the number of letters
 * Return: returns the letters in the text file
 * if file is NULL return 0
 * if operation fails return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, o;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	o = write(STDOUT_FILENO, text, let);

	close(file);

	return (o);
}
