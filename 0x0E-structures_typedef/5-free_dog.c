#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog
 *
 * @d: dog
 *
 * Return: dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
