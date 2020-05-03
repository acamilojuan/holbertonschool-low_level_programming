#include "lists.h"
/**
 * sum_dlistint - Function to sum all the elements of a list
 * @head: Pointer to the list
 * Return: Value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0, sum = 0;

	while (head != '\0')
	{
		sum += (*head).n;
		head = (*head).next;
		a++;
	}
	return (sum);
}
