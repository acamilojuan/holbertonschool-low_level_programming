#include "lists.h"
/**
 * print_dlistint - Function to print all the elements of a list
 * @h: Pointer to the list
 * Return: Value of a
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h != '\0')
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		a++;
	}
	return (a);
}
