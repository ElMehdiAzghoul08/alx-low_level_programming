#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ds, product_w;
	ssize_t range_txt = 0;

	if (filename == NULL)
		return (-1);

	ds = open(filename, O_WRONLY | O_APPEND);
	if (ds == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[range_txt] != '\0')
			range_txt++;

		product_w = write(ds, text_content, range_txt);
		if (product_w == -1)
		{
			close(ds);
			return (-1);
		}
	}

	close(ds);

	return (1);
}
