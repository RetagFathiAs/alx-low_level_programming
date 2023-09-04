#include "main.h"

#define BUFFER_SIZE 1024
/**
 * close_w - close function
 * @fd: read
 * @fd: write
 */
void close_w(int fd, int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100); }
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100); }
}

/**
 * main - Function that copienother file
 * @argc: argumenount
 * @argv: argrray
 * Return: exit_successr 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;
	int fd, fd;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = argv[1];
	file_to = argv[2];
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98); }
		wr = write(fd, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99); }}
	close_w(fd, fd);
	return (0);
}

