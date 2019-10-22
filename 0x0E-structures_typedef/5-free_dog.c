#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_dog - function that frees dogs
  * @dog_t: input
  * @d: input
  **/
void free_dog(dog_t *d)
{
	while (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
