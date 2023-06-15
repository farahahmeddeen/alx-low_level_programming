#include "lists.h"
/**
 * free_dlistint - frees a node
 *
 * @head: pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *old_node, *new_node;

	if (head)
	{
		old_node = head;
		new_node = head->next;
		while (new_node)
		{
			free(old_node);
			old_node = new_node;
			new_node = new_node->next;
		}
		free(old_node);
	}
}
