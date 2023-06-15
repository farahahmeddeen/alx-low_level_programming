#include "lists.h"
/**
 * add_dnodeint - adds new node
 *
 * @head: pointer to first element
 * @n: sets new node
 *
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnew;

	newnew = malloc(sizeof(dlistint_t));
	if (newnew == NULL)
		return (NULL);
	newnew->n = n;
	newnew->prev = NULL;
	newnew->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newnew;
	}
	*head = newnew;
	return (newnew);
}
