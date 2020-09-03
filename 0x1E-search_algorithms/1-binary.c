#include "search_algos.h"
/**
 * binary_search - fx to find value in sorted int array with Binary algorithm
 * @array: pointer to the 1st element of the array
 * @size: size of the array
 * @value: the value to  be searched
 * Return: index location
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, mid = 0, index = 0;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (index = first; index < last; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		mid = (last + first) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			last = mid - 1;

		else if (value > array[mid])
			first = mid + 1;
	}
	return (-1);
}
