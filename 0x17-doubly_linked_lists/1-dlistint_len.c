#include "lists.h"
/**
 * dlistint_len - returns number of elements
 *
 * @h: pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
