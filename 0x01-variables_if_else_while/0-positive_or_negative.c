#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n. */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
