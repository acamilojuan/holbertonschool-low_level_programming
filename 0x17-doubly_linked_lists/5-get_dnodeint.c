#include "lists.h"
/**
 * get_dnodeint_at_index - Function to get a node at index
 * @head: Pointer to the head of the list_t
 * @index: Variable from main
 * Return: The new list or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int a = 0;

	if (head == '\0')
		return ('\0');
	while (aux != '\0')
	{
		if (a == index)
			return (aux);
		aux = (*aux).next;
		a++;
	}
	return ('\0');
}
