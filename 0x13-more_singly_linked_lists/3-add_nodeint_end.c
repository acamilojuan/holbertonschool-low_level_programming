#include "lists.h"
/**
 * add_nodeint_end - Function to add a new node at the end
 * @head: Double pointer to the list
 * @n: Value of the variables in the list
 * Return: New listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == '\0')
		return ('\0');
	(*new).n = n;
	(*new).next = '\0';

	if (*head == '\0')
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != '\0')
		temp = (*temp).next;
	(*temp).next = new;
	return (new);
}
