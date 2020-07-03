#include "lists.h"
/**
 * free_dlistint - Function to free a list
 * @head: Pointer to the head of the list_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head != '\0')
	{
		aux = (*head).next;
		free(head);
		head = aux;
	}
}
