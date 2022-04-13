#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
