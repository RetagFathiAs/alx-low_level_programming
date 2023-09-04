#include "main.h"

/**
 * create_file - Functioni creates a file
 * @filename: type char filename
 * @text_content: type char
 * Return: -1 if NULL, 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	int of = 0;
	int  wf = 0;
	int  counter = 0;

	if (!filename)
		return (-1);
	of = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (!of)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + counter) != '\0')
		{
			counter++;
		}
		wf = write(of, text_content, counter);
	}
	if (!of && wf != counter)
		return (-1);
	return (1);
}
