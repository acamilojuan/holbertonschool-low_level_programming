#include "lists.h"
/**
 * add_dnodeint_end - Function to add a new node at the end
 * @head: Double pointer to the list
 * @n: Int variable from main
 * Return: Values of the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	(*new).n = n;
	(*new).next = '\0';
	if (*head == '\0')
	{
		*head = new;
		return (new);
	}
	while ((*aux).next != '\0')
		aux = (*aux).next;
	(*aux).prev = aux;
	(*aux).next = new;
	return (new);
}
