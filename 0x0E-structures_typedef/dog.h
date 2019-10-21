#ifndef DOG_H
#define DOG_H

/**
  * struct dog - struct the information of the dog
  *
  * @name : name of input^
  * @age : date of input^
  * @owner : date of input^
  **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
