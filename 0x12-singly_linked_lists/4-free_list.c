#include "lists.h"
/**
 * free_list - function to free memory
 *
 * @head: singly link head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
