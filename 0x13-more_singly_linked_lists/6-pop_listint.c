#include "lists.h"
/**
 * pop_listint - Function to delete the head node of the list
 * @head: Double Pointer to the head of the listint_t
 * Return: Data of the head node in integer value
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int a;

	if (*head == '\0')
		return (0);
	new = (**head).next;
	a = (**head).n;
	free(*head);
	*head = new;
	return (a);
}
