#include "lists.h"
/**
 * sum_listint - Function to return sum the data of the list
 * @head: The pointer to the content of the list
 * Return: Sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (0);
	while (head != '\0')
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
