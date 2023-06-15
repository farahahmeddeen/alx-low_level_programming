#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes nodes
 *
 * @head: pointer
 * @index: position
 *
 * Return: -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *xnode = *head;
	dlistint_t *nnode = *head;
	unsigned int i, sum = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = nnode->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(nnode);
		return (1);
	}
	i = index - 1;
	while (xnode != NULL && sum != i)
	{
		sum++;
		xnode = xnode->next;
	}
	if (sum == i && xnode != NULL)
	{
		nnode = xnode->next;
		if (nnode->next)
		{
			nnode->next->prev = xnode;
		}
		xnode->next = nnode->next;
		free(nnode);
		return (1);
	}
	return (-1);
}
