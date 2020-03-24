#include "lists.h"
/**
 * print_listint - print counting in list
 * @h: constant listint_t
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	if (h == '\0')
		return (0);
	for (; h != '\0'; a++)
	{
		printf("%d\n", h->n);
		h = (*h).next;
	}
	return (a);
}
