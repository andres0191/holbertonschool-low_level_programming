#include <stdio.h>
/**
* main - program that prints its name, followed by a new line
* @argc: count
* @argv: array
*
* Return: Always 0.
**/
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}
