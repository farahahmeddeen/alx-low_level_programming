#include "dog.h"
/**
 * init_dog - function to initialize
 * @d: pointer
 * @name: name of the element
 * @age: age of the element
 * @owner: owner of the element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
