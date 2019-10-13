#include <stdio.h>
/**
*
*
*
*
**/
int main(int argc, char *argv[])
{
	int a;
	printf("%d\n", argc);
	for (a = 0; a < argc; a++)
	{
		printf("%s", argv[a]);
	}
	return (0);
}
