#include "lists.h"
/**
 * dlistint_len - Function to return the number of elements of a list
 * @h: Pointer to the list
 * Return: Value of a
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != '\0')
	{
		h = (*h).next;
		a++;
	}
	return (a);
}
