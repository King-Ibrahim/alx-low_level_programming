#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - This function appends text
 *  at the end of a file
 * @filename: The pointer to the file
 * @text_content: The content of the file
 * Return: returns 1 when text is appended
 * returns -1 for all other conditions
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	write(file, text_content, i);

	return (1);
}
