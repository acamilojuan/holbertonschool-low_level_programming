#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function to add a new node at the end
 * @head: Double pointer to the list
 * @str: Pointer to strings
 * Return: List_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
/**
 * _strlen - Function to know the lenght
 * @s: Const char pointer
 * Return: lenght of the string
 */
int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}
