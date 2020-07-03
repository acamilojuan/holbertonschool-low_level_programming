#include "lists.h"
/**
 * listint_len - Function to print lenght of the list
 * @h: The pointer to the content of the list
 * Return: size_t variable
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	for (; h != '\0'; a++)
	{
		h = (*h).next;
	}
	return (a);
}
