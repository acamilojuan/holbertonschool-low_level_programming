#include "lists.h"
/**
 * free_list - Function to free a list
 * @head: Pointer to the head of the list_t
 */
void free_list(list_t *head)
{
	list_t *old, *new;

	old = head;

	while (old != NULL)
	{
		new = old->next;
		free(old);
		old = new;
	}
}
