#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - initializes the variable of a type
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d)
	{
		if (d->name)
			printf("Name : %s\n", d->name);
		else
			printf("Name : (nil)\n");

		printf("Age : %.6f\n", d->age);

		if (d->owner)
			printf("Owner : %s\n", d->owner);
		else
			printf("Owner : (nil)\n");
	}
}
