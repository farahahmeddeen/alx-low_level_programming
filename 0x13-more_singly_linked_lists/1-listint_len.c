#include "lists.h"
/**
 * listint_len - returns number of elements
 *
 * @h: linked list
 *
 * Return: the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t fa;

	for (fa = 0; h != NULL ; fa++)
	{
		h = h->next;
	}
	return (fa);
}
