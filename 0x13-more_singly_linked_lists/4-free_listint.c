#include "lists.h"
/**
 * free_listint - Function to free a list
 * @head: Pointer to the head of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	if (head == '\0')
		return;
	while (head->next != '\0')
	{
		new = (*head).next;
		free(head);
		head = new;
	}
	free(head);
}
