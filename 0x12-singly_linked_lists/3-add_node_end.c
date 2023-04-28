#include "lists.h"
/**
 * add_node_end - function that adds a new node
 *
 * @head: singly link head
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fa, *temp;
	size_t len = strlen(str);

	fa = malloc(sizeof(list_t));
	if (fa == NULL)
		return (NULL);
	fa->str = strdup(str);
	fa->len  = len;
	fa->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = fa;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = fa;
	}
	return (fa);
}
