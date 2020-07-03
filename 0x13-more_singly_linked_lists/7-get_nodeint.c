#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns an specific node of a list
 * @head: Pointer to the listint_t
 * @index: Position of the node
 * Return: The specific node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int a;

	if (head == '\0')
		return (NULL);
	new = head;
	for (a = 0; a < index && (*new).next; a++)
		new = (*new).next;
	if (a != index)
		return (NULL);
	return (new);
}
