/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file;
	int letters_num;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_num = 0; text_content[letters_num]; letters_num++)
		;

	rwr = write(file, text_content, letters_num);

	if (rwr == -1)
		return (-1);

	close(file);

	return (1);
}
