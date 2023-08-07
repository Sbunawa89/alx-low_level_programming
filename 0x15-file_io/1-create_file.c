#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: A pointer that thet file name will create
 * @text_content: A pointer to string
 * Return: 1 success, while -1 for error
 */

int create_file(const char *filename, char *text_content)

{

	int hw, w, len = 0;

	if (filename == NULL)
		return ();

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	hw = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(hw, text_content, len);

	if (hw == -1 || w == -1)
		return (-1);

	close(hw);

	return (1);
}
