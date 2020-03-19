#include "lists.h"
/**
 * print_list - print cotaing in list
 * @h: constant list_t
 * Return: int
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	for (; h != NULL; a++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	h = h->next;
	}
	return (a);
}
