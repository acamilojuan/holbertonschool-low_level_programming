#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function
 * struct dog - struct
 * @name: variable char pointer
 * @age: variable float
 * @owner: variable char pointer
 * @d: variable pointer to structure
 * Description: function to initialize the structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
