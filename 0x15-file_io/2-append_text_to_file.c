#include "main.h"

/**
 * append_text_to_file - Function that appends text at file end
 * @filename: Pointer to file name
 * @text_content: The string to add to file end
 * Return: --1 if function fails, else -1
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int p, q,

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{

		for (len = 0; text_content[len];)
			len++;

	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, len);

	if (p == -1 || q == -1)
		close(p);

	return (1);

}
