#include "main.h"

/**
 * append_text_to_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of = 0;
	int wr = 0;
	int counter;

	if (!filename)
		return (-1);
	of = open(filename, O_RWDR | O_APPEND);
	if (of == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + counter) != '\0')
	{
		counter++;
	}
	wr = write(of, text_content, counter);
	if (wr == -1)
		return (-1);
	return (1);
}
