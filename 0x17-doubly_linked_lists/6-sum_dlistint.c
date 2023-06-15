#include "lists.h"
/**
 * sum_dlistint - returns sum
 *
 * @head: pointer
 *
 * Return: sum of all
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nn = head;
	int count = 0;

	while (nn != NULL)
	{
		count += nn->n;
		nn = nn->next;
	}
	return (count);
}
