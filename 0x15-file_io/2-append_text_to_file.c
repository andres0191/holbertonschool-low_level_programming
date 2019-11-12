#include "holberton.h"
/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename : pointer of input
  * @text_content : pointer of input
  *
  * Return: Always 0
  **/
int append_text_to_file(const char *filename, char *text_content)
{
	int create_file, b;

	if (filename == NULL)
	{
		return (-1);
	}
	create_file = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		b = write(create_file, text_content, strlen(text_content));
	}
	if (b == -1)
	{
		return (-1);
	}
	close(create_file);
	return (1);
}
