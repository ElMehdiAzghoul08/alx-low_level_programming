#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define _SIZE_b 1024
/**
 * jstexit_therror - a function
 * @_the_program: input
 * @the_content_: input
 * @name_of_file: input
 */
void justexit_therror(int _the_program, const char *the_content_,
		const char *name_of_file)
{
	dprintf(STDERR_FILENO, the_content_, name_of_file);
	exit(_the_program);
}
/**
 * main - a function
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from_, file_to_;
	ssize_t rb, wb;
	char b[_SIZE_b];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from_ file_to\n", argv[0]);
		exit(97);
	}
	file_from_ = open(argv[1], O_RDONLY);
	if (file_from_ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		justexit_therror(98, "", argv[1]);
	}
	file_to_ = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		justexit_therror(99, "", argv[2]);
	}
	do
	{
		rb = read(file_from_, b, _SIZE_b);
		if (rb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			justexit_therror(98, "", argv[1]);
		}
		wb = write(file_to_, b, rb);
		if (wb == -1 || wb != rb)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			justexit_therror(99, "", argv[2]);
		}
	} while (rb == _SIZE_b);
	if (close(file_from_) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_);
		justexit_therror(100, "", "");
	}
	if (close(file_to_) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_);
		justexit_therror(100, "", "");
	}
	return 0;
}
