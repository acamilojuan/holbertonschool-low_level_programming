#include "lists.h"
/**
 * free_list - Function to free a list
 * @head: Pointer to the head of the list_t
 */
void free_list(list_t *head)
{
	list_t *new;

	for (new = head; head != NULL;)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
