/**
 * int_index - returns the index
 * @array: pointer to array of int
 * @size: variable size of the array
 * @cmp: function pointer
 * Return: a or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (a = 0; a < size; a++)
			{
				if (cmp(array[a]))
				{
					return (a);
				}
			}
		}
	}
	return (-1);
}
