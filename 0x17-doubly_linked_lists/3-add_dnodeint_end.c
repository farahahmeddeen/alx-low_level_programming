#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end
 *
 * @head: pointer
 * @n: sets the new node
 *
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnew;
	dlistint_t *c_new;

	newnew = malloc(sizeof(dlistint_t));
	if (newnew == NULL)
		return (NULL);
	newnew->n = n;
	newnew->next = NULL;
	if (*head == NULL)
	{
		newnew->prev = NULL;
		*head = newnew;
	}
	else
	{
		c_new = *head;
		while (c_new->next != NULL)
			c_new = c_new->next;
		c_new->next = newnew;
		newnew->prev = c_new;
	}
	return (newnew);
}
