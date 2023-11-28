#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a functoin that create files
 * @filename: input
 * @text_content: input
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int ds, product_w;
	ssize_t txt_range = 0;

	if (filename == NULL)
		return (-1);

	ds = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (ds == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[txt_range] != '\0')
			txt_range++;

		product_w = write(ds, text_content, txt_range);
		if (product_w == -1)
		{
			close(ds);
			return (-1);
		}
	}

	close(ds);

	return (1);
}
