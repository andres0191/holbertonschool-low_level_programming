#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers.
* @argc: count
* @argv: array
*
* Return: Always 0
**/
int main(int argc, char *argv[])
{
	int a;

	if (argc >= 2)
	{
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
