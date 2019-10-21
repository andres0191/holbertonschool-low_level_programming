#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - function that print to struct dog
  * @d : pointer of input
  **/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
