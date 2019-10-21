#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * init_dog - function that start to variable of type struct dog
  * @d : input
  * @name : input
  * @age : input
  * @owner : input
  **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
