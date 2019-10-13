#include <stdio.h>
/**
* main - Program that prints its name
* @argc: count
* @argv: array
*
* Return: Always 0
**/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s", argv[a]);
		printf("\n");
	}
	return (0);
}
