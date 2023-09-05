#include "main.h"

/**
 * _strlen - compute the length
 * @str: the string
 *
 * Return: the length
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * append_text_to_file - Function a file
 * @filename: type char filenam
 * @text_content: type char
 * Return: -1 if fail  1 on sucess
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
