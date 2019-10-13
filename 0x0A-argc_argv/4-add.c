#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers.
* @argc: count
* @argv: array
*
* Return: Always 0
**/
int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc >= 3)
	{
	for (a = 1; a < argc; a++)
	{
		if (atoi(argv[a]))
		{
			b += (atoi(argv[a]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", b);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
