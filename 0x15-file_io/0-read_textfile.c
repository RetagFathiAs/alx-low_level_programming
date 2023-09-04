#include "main.h"

/**
 * read_textfile - reads the file and print it
 * @filename : type char file
 * @letters : size of letters
 * Return: if success 0 or 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t si, len;
	char *siz;
	int os;

	if (!filename)
		return (0);
	siz = malloc(letters * sizeof(char));
	if (siz == NULL)
		return (0);
	os = open(filename, O_RDONLY);
	if (os == -1)
	{
		free(siz);
		return (0);
	}
	si = read(os, siz, letters);
	if (si == -1)
	{
		free(siz);
		close(os);
		return (0);
	}
	close(os);
	len = write(STDOUT_FILENO, siz, si);
	if (len == -1)
	{
		free(siz);
		return (0);
	}
	if (len != si)
		return (0);
	return (si);
}
