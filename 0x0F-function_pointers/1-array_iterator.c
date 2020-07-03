#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function
 * @array: pointer to int
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action != '\0' && size != '\0' && array != '\0')
		for (a = 0; a < size; a++)
			action(array[a]);
}
