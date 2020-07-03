#include "lists.h"
/**
 * free_list - Function to free a list
 * @head: Pointer to the head of the list_t
 */
void free_list(list_t *head)
{
	list_t *new;

	if (head == '\0')
		return;
	while (head->next != '\0')
	{
		new = (*head).next;
		free(head->str);
		free(head);
		head = new;
	}
	free(head->str);
	free(head);
}
