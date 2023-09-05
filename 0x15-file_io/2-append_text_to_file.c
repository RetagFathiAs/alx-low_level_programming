#include "main.h"

/**
 * append_text_to_file - Function a file
 * @filename: type char filenam
 * @text_content: type char
 * Return: -1 if fail  1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of = 0;
	int wr = 0;
	int counter;

	of = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (of == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + counter) != '\0')
	{
		counter++;
	}
	wr = write(of, text_content, counter);
	close(of);
	if (wr == -1)
		return (-1);
	return (1);
}
