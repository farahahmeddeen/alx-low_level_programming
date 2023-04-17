#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free memory
 *
 * @dog_t: first element
 * @d: second element
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
