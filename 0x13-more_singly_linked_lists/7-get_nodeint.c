#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: linked list head
 * @index: node index
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int fa;

	for (fa = 0; fa < index; fa++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
