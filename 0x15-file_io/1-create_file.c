#include "holberton.h"
#include <string.h>
/**
  * create_file - function that creates a file
  * @filename: pointer of input
  * @text_content: pointer of input
  *
  * Return: Always 0
  **/
int create_file(const char *filename, char *text_content)
{
	int create_file;

	if (filename == NULL)
	{
		return (-1);
	}
	create_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
	write(create_file, text_content, strlen(text_content));
	close(create_file);
	}
	close(create_file);
	return (1);
}
