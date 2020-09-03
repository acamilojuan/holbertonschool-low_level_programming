#include "search_algos.h"

/**
* linear_search - searches a value in an int array with Linear search algorithm
* @array: pointer to the array
* @size: size of the array
* @value: value to be searched
* Return: Index if success or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] != value)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			return (index);
		}
	}
	return (-1);
}
