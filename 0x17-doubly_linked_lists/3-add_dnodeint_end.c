#include "lists.h"
/**
 * add_dnodeint_end - Function to add a new node at the end
 * @head: Double pointer to the list
 * @n: Int variable from main
 * Return: Values of the new list or Null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return (NULL);
	(*new).n = n;
	(*new).next = '\0';
	if (*head == '\0')
	{
		*head = new;
		(*new).prev = '\0';
		return (new);
	}
	while (aux->next != '\0')
		aux = aux->next;
	(*new).prev = aux;
	(*aux).next = new;
	return (new);
}
