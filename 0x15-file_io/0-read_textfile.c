#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file and prints it to stdo
 * @filename: text file to read by the function
 * @letters: Number of letters to be read by the function
 * Return: w actual number of bytes and 0 if the function fails NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *duf;
	ssize_t hd;
	ssize_t y;
	ssize_t z;

	hd = open(filename, O_RDONLY);

	if (hd == -1)
		return (0);

	duf = malloc(sizeof(char) * letters);
	z = read(hd, duf, letters);
	y = write(STDOUT_FILENO, duf, z);

	free(duf);
	close(hd);
	return (y);
}

