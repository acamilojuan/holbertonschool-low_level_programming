#include "lists.h"
/**
 * insert_dnodeint_at_index - Function to insert a node at a given position
 * @h: Double pointer to the list
 * @idx: unsigned int from main
 * @n: Int from main
 * Return: Value of a
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = *h;
	unsigned int a;

	if ((idx != 0 && h == '\0') || idx > dlistint_len(*h))
		return ('\0');
	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	(*new).n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	else
	{
		for (a = 0; a < idx - 1; a++)
			aux = (*aux).next;
	}
	(*new).next = (*aux).next;
	(*aux).next->prev = new;
	(*aux).next = new;
	(*new).prev = aux;
	return (new);
}
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
