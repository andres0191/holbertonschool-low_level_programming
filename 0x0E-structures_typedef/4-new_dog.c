#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - concatenates two strings
 * @dest: array
 * @src: array
 * @n : in
 * Return: Always dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
	dest[b] = src[b];
	}
	for (; b < n; b++)
	{
	dest[b] = '\0';
	}
	return (dest);
}

/**
  * new_dog - function that created to new dog
  * @name: date of input
  * @age: date of input
  * @owner: date of input
  *
  * Return: Always 0
  **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0;
	dog_t *dogi;

	while (name[a] != '\0')
	{
		a++;
	}
	while (owner[b] != '\n')
	{
		b++;
	}
	dogi = malloc(sizeof(dog_t));
	if (dogi == NULL)
	{
		return (NULL);
	}
	dogi->name = malloc(sizeof(char) * (a + 1));
	if (dogi->name == NULL)
	{
		free(dogi);
		return (NULL);
	}
	dogi->owner = malloc(sizeof(char) * (b + 1));
	if (dogi->owner == NULL)
	{
		free(dogi->name);
		free(dogi);
		return (NULL);
	}
	dogi->age = age;
	dogi->name = _strncpy(dogi->name, name, a + 1);
	dogi->owner = _strncpy(dogi->owner, owner, b + 1);
	return (dogi);
}
