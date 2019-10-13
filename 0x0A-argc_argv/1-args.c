#include <stdio.h>
/**
*
*
*
*
**/
int main(int argc, char *argv[])
{
	int a = 0;
	printf("%d\n", argc - 1);
	if (a < argc)
	{
		printf("%s", argv[a]);
	}
	return (0);
}
