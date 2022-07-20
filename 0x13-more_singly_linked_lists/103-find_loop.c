#include "lists.h"
/**
 * find_listint_loop - Function
 *
 * Description: finds the loop in a linked list.
 *
 * @head: pointer of type listint_t
 *
 * Return: returns address to node where loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *temp;

	first = temp = head;

	while (first && temp && temp->next)
	{
		first = first->next;
		temp = temp->next->next;
		if (first == temp)
			return (first);
	}
	return (NULL);
}
