#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: linkrf list head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *fa;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		fa = (*head)->next;
		free(*head);
		*head = fa;
	}
	*head = NULL;
}
