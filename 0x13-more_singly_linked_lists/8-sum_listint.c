#include "lists.h"
/**
 * sum_listint - Function to return sum the data of the list
 * @head: The pointer to the content of the list
 * Return: Sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int a, sum;

	if (head == '\0')
		return (0);
	for (a = 0; head != '\0'; a++)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
