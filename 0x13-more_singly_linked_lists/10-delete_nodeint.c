#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 *
 * @head: linked list head
 * @index: index
 *
 * Return: 1 and -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *fa;
	listint_t *ah;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		fa = *head;
		*head = fa->next;
		free(fa);
		return (0);
	}
	ah = NULL;
	fa = *head;
	for (i = 0; i < index; i++)
	{
		if (fa == NULL)
			return (-1);
		ah = fa;
		fa = fa->next;
	}
	ah->next = fa->next;
	free(fa);
	return (0);
}
