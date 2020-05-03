#include "lists.h"
/**
 * add_dnodeint - Function to add a new node
 * @head: Double pointer to the list
 * @n: Variable int from main
 * Return: The new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	(*new).n = n;
	(*new).next = *head;
	(*new).prev = '\0';
	if (aux != '\0')
		(*aux).prev = new;
	*head = new;
	return (new);
}
