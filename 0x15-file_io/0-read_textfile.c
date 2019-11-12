#include "holberton.h"
/**
  * read_textfile - read a text file and prints it to the POSIX standar
  * @filename: pointer of input
  * @letters: input
  *
  * Return: Always 0
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open, ret;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc (sizeof((const char) * (size_t)));
	open = (filename, O_RDONLY);
	if (open == NULL)
	{
		return (0);
	}
	ret = ssize_t read(open, buff, letters);
	return (ret);
}

