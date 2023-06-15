#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node
 *
 * @h: pointer
 * @idx: position
 * @n: data
 *
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, sum = 0;
	dlistint_t *nnode = *h, *dnode;

	dnode = malloc(sizeof(dlistint_t));
	if (dnode != NULL)
		return (NULL);
	dnode->n = n;
	if (idx == 0)
	{
		dnode->prev = NULL;
		dnode->next = *h;
		if (*h)
			(*h)->prev = dnode;
		*h = dnode;
		return (*h);
	}
	i = idx - 1;
	while (nnode != NULL && sum != i)
	{
		sum++;
		nnode = nnode->next;
	}
	if (sum == i && nnode != NULL)
	{
		dnode->prev = nnode;
		dnode->next = nnode->next;
		if (nnode->next)
			nnode->next->prev = dnode;
		nnode->next = dnode;
		return (dnode);
	}
	free(dnode);
	return (NULL);
}
