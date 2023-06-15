#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: pointer
 * @index: nth node
 *
 * Return: return null if its fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sum = 0;
	dlistint_t *nn = head;

	while (sum < index && nn != NULL)
	{
		sum++;
		nn = nn->next;
	}
	if (sum == index && nn != NULL)
		return (nn);
	return (NULL);
}
