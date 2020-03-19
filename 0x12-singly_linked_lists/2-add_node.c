#include "lists.h"
#include <string.h>
/**
 * add_node - Function to add a new node
 * @head: Double pointer to the list
 * @str: Pointer to strings
 * Return: List_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (new == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
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
