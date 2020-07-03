#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function
 * @d: variable pointer to structure
 * Description: function to print the structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}		
