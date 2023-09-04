#include "main.h"

#define BUFFER_SIZE 1024
/**
 * close_w - close function
 * @fr: read
 * @fw: write
 */
void close_w(int fr, int fw)
{
	if (close(fw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw);
		exit(100); }
	if (close(fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		exit(100); }
}

/**
 * main - Function that copieto another file
 * @argc: argument of count
 * @argv: argument of array
 * Return: exit_success if or 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;
	int fr, fw;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = argv[1];
	file_to = argv[2];
	fr = open(file_from, O_RDONLY);
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fr, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98); }
		wr = write(fw, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99); }}
	close_w(fr, fw);
	return (0);
}
