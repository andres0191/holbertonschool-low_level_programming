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
	int open_file, a = 0, b = 0;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}
	a = read(open_file, buff, letters);
	b = write(STDOUT_FILENO, buff, a);
	if (b == -1)
	{
		return (0);
	}
	return (a);
}
