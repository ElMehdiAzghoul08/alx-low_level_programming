#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function reads a text file
 * @filename: input
 * @letters: input
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ds;
	ssize_t r_tot, tot_w;
	char *br;

	if (filename == NULL)
		return (0);

	ds = open(filename, O_RDONLY);
	if (ds == -1)
		return (0);

	br = malloc(sizeof(char) * letters);
	if (br == NULL)
		return (0);

	r_tot = read(ds, br, letters);
	if (r_tot == -1)
	{
		free(br);
		close(ds);
		return (0);
	}

	tot_w = write(STDOUT_FILENO, br, r_tot);
	if (tot_w == -1 || tot_w != r_tot)
	{
		free(br);
		close(ds);
		return (0);
	}

	free(br);
	close(ds);

	return (r_tot);
}
