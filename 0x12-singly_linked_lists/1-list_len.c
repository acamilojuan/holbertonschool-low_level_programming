#include "lists.h"
/**
 * list_len - print cotaing in list
 * @h: constant list_t
 * Return: int
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	for (; h != NULL; a++)
	{
		if (h->str != NULL)
			h = h->next;
	}
	return (a);
}
