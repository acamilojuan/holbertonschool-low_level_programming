#include "lists.h"
#include <string.h>
/**
 * add_nodeint - Function to add a new node
 * @head: Double pointer to the list
 * @n: integer values of the list
 * Return: The new listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == '\0')
		return ('\0');
	(*new).n = n;
	(*new).next = *head;
	*head = new;
	return (new);
}
